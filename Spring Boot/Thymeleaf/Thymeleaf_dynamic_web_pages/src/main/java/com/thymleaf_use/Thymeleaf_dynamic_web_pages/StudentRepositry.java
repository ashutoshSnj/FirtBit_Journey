package com.thymleaf_use.Thymeleaf_dynamic_web_pages;

import java.util.List;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;

public interface StudentRepositry extends JpaRepository<Student, Integer> {
   //SELECT * FROM Student WHERE Stream = ?; 
	public List<Student> findByStream(String str);
   //SELECT * FROM Student WHERE Stream = ? AND Gread <> ?;
	public List<Student> findByStreamAndGreadNot(String Stream,String Gread);
    //SELECT COUNT(*) FROM Student WHERE Stream = ?;
     public int countByStream(String Stream);
     // SELECT COUNT(*) FROM Student WHERE Gread = ?;
     public int countByGread(String Gread);
   
     @Query(value = "select rollno,name from all_students where rollno=?1",nativeQuery=true)
     public List<Object[]> findSingleColumnId(int v1);
     
    /* @Query(value = "select name from Student where rollno=?1")
     public List<Object[]> findname(int v1);*/
    
}
/*  When a Spring Boot application starts, it first scans and registers all components,
 *  including @Entity, @Repository, and other annotations. During this process, Spring registers
 *   all entity classes, such as Student, in the JPA entity manager metadata. 
 *   It then scans repository interfaces like StudentRepositry and extracts 
 *   the entity class (Student) using reflection, despite Java's generic type erasure at runtime. 
 *   By analyzing JpaRepository<Student, Integer>, Spring determines that StudentRepositry is associated with
 *    the Student entity. Since JpaRepository is an interface, Spring finds its default implementation, 
 *    SimpleJpaRepository<Student, Integer>, and dynamically creates a proxy implementation using JDK Dynamic
 *     Proxy or CGLIB Proxy. This proxy is then registered as a Spring bean, allowing it to be injected
 *      using @Autowired. When a repository method such as findByStream("Science") is called, 
 *      the proxy intercepts the method call, analyzes the stored entity metadata,
 *       and dynamically generates the equivalent SQL query like
 *        SELECT * FROM student WHERE stream = 'Science'. Thus, at runtime,
 *         Spring first registers all necessary components, then extracts entity information 
 *         using reflection, creates and registers proxy implementations for repositories, 
 *         and finally, dynamically generates and executes SQL queries when repository methods are invoked.*/
