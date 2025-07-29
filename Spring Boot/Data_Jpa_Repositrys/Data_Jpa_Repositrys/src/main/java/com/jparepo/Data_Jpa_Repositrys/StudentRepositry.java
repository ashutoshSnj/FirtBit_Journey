package com.jparepo.Data_Jpa_Repositrys;

import java.awt.datatransfer.Transferable;
import java.util.List;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Modifying;
import org.springframework.data.jpa.repository.Query;

import jakarta.transaction.Transactional;

public interface StudentRepositry extends JpaRepository<Student, Integer> {
   //SELECT * FROM Student WHERE Stream = ?; 
	public List<Student> findByStream(String str);
   //SELECT * FROM Student WHERE Stream = ? AND Gread <> ?;
	public List<Student> findByStreamAndGreadNot(String Stream,String Gread);
    //SELECT COUNT(*) FROM Student WHERE Stream = ?;
     public int countByStream(String Stream);
     // SELECT COUNT(*) FROM Student WHERE Gread = ?;
     public int countByGread(String Gread);
    
    
   
     //this native q so 
     @Query(value = "select rollno,name from all_students where rollno=?1",nativeQuery=true)
     public List<Object[]> giveonlyname(int v1);
     //findSingleColumnId
   // this q is depend on class variable name
     @Query(value = "select name from Student where id=?1")
     public List<Object[]> anyname(int v1);
     
     @Modifying
     @Transactional
     @Query(value="update  all_students set stream=?2 where gread=?1" ,nativeQuery = true)
     public int updeteStream(String gread,String stream);
     
     
     @Modifying
     @Transactional
     @Query(value="delete Student where id=:id")
     public int deletrecord(int id);
    
}
/*  When a Spring Boot application starts, it first scans and registers all components,
 *  including @Entity, @Repository, and other annotations. During this process, Spring registers
 *   all entity classes, such as Student, in the JPA entity manager metadata. 
 *   It then scans repository interfaces like StudentRepositry and extracts 
 *   the entity class (Student) using reflection, despite Java's generic type erasure at runtime. 
 *   By analyzing JpaRepository<Student, Integer>, Spring determines that StudentRepositry is associated with
 *    the Student entity.
 *   // this s main 
 *     Since JpaRepository is an interface, Spring finds its default implementation, 
 *    SimpleJpaRepository<Student, Integer>, and dynamically creates a proxy implementation using JDK Dynamic
 *     Proxy or CGLIB Proxy. This proxy is then registered as a Spring bean, allowing it to be injected
 *      using @Autowired. When a repository method such as findByStream("Science") is called, 
 *      the proxy intercepts the method call, analyzes the stored entity metadata,
 *       and dynamically generates the equivalent SQL query like
 *        SELECT * FROM student WHERE stream = 'Science'. Thus, at runtime,
 *         Spring first registers all necessary components, then extracts entity information 
 *         using reflection, creates and registers proxy implementations for repositories, 
 *         and finally, dynamically generates and executes SQL queries when repository methods are invoked.*/


/*
 **Why Does Spring Boot Not Use `executeQuery()` for Update Queries?**

### **1. Understanding the Issue**
In Spring Boot with JPA (Hibernate), executing an `UPDATE` query requires the correct execution method. If Spring Boot does not use `executeUpdate()` but instead attempts `executeQuery()`, it is likely due to incorrect repository method configuration.

### **2. Correct Way to Write an Update Query in Spring Data JPA**

To ensure that Spring Boot correctly processes an update query, follow these best practices:

#### **✅ Using JPQL (Java Persistence Query Language)**
```java
@Repository
public interface StudentRepository extends JpaRepository<Student, Long> {

    @Modifying
    @Transactional
    @Query("UPDATE Student s SET s.stream = :stream WHERE s.grade = :grade")
    int updateStream(@Param("stream") String stream, @Param("grade") String grade);
}
```
**Explanation:**
- `@Modifying`: Informs Spring Data JPA that this is a modifying query (not a SELECT query).
- `@Transactional`: Ensures the update operation runs within a transaction.
- `int updateStream(...)`: Returns the number of affected rows.

#### **✅ Using Native SQL Query**
```java
@Modifying
@Transactional
@Query(value = "UPDATE all_students SET stream = :stream WHERE grade = :grade", nativeQuery = true)
int updateStudentStream(@Param("stream") String stream, @Param("grade") String grade);
```
This works similarly but executes a native SQL query.

### **3. Common Mistakes That Cause Issues**
#### **🔴 Incorrect Example (Causes Issues)**
```java
@Query("UPDATE Student s SET s.stream = :stream WHERE s.grade = :grade")
void updateStream(@Param("stream") String stream, @Param("grade") String grade);
```
🚫 **Problems with this approach:**
- The method **returns `void`**, so Spring assumes it’s a read-only query.
- Missing `@Modifying`, which prevents it from being recognized as an update query.

### **4. Key Takeaways**
- Always annotate modifying queries with `@Modifying`.
- Ensure they return an integer (number of affected rows) instead of `void`.
- Use `@Transactional` when necessary to handle transactions properly.
- Use `executeUpdate()` for update queries, not `executeQuery()`.

By following these guidelines, Spring Boot will correctly execute your update queries using `executeUpdate()` instead of `executeQuery()`.

*/
