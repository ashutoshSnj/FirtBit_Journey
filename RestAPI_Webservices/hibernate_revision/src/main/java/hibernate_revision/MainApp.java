package hibernate_revision;

import java.awt.datatransfer.Transferable;
import java.io.Serializable;

import org.hibernate.Session;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;

//import org.hibernate.cfg.Configuration;

public class MainApp {
  public static void main(String[] args) {
	Session session=new Configuration().configure("hibernate.cfg.xml").buildSessionFactory().openSession();
	    Transaction tra= session.beginTransaction();
	/*session.persist(new Employees(125,"Ashutosh","pune"));
	Serializable id= (Serializable) session.save(new Employees(155,"Ashutosh","pune"));
	System.out.println(id);
	Employees emp=new Employees(45,"sam","akole");
	session.persist(emp);
	Employees emp1=session.getReference(emp);
	  emp1.setAddress("nashik");*/
	 // 1. Select all employees
	    session.createQuery("FROM Employees", Employees.class).list();

	    // 2. Select employee by id
	    session.createQuery("FROM Employees e WHERE e.id = 1", Employees.class).uniqueResult();

	    // 3. Select employees from a specific city
	    session.createQuery("FROM Employees e WHERE e.address = 'Pune'", Employees.class).list();

	    // 4. Select employee with specific name
	    session.createQuery("FROM Employees e WHERE e.name = 'Ashutosh'", Employees.class).list();

	    // 5. Select only name column
	    session.createQuery("SELECT e.name FROM Employees e").list();

	    // 6. Select name and address
	    session.createQuery("SELECT e.name, e.address FROM Employees e").list();

	    // 7. Order employees by name ASC
	    session.createQuery("FROM Employees e ORDER BY e.name ASC", Employees.class).list();

	    // 8. Order employees by id DESC
	    session.createQuery("FROM Employees e ORDER BY e.id DESC", Employees.class).list();

	    // 9. Count total employees
	    session.createQuery("SELECT COUNT(e) FROM Employees e", Long.class).uniqueResult();

	    // 10. Get employees where name starts with 'A'
	    session.createQuery("FROM Employees e WHERE e.name LIKE 'A%'", Employees.class).list();

	    // 11. Get employees where id between 10 and 20
	    session.createQuery("FROM Employees e WHERE e.id BETWEEN 10 AND 20", Employees.class).list();

	    // 12. Get employee with max id
	    session.createQuery("FROM Employees e WHERE e.id = (SELECT MAX(e2.id) FROM Employees e2)", Employees.class).uniqueResult();

	    // 13. Update address of employee (HQL does not support bulk update using session)
	    session.createQuery("UPDATE Employees e SET e.address = 'Mumbai' WHERE e.id = 1").executeUpdate();

	    // 14. Delete employee by name
	    session.createQuery("DELETE FROM Employees e WHERE e.name = 'Ravi'").executeUpdate();

	    // 15. Group by address (e.g., count of employees in each city)
	    session.createQuery("SELECT e.address, COUNT(e) FROM Employees e GROUP BY e.address").list();
////////////////////////////////////////////////////////////////////////////////////////////////////////////
	Session em=session;
	    // 1. Get all employees
	    em.createQuery("SELECT e FROM Employees e", Employees.class).getResultList();

	    // 2. Get employee by ID
	    em.createQuery("SELECT e FROM Employees e WHERE e.id = 1", Employees.class).getSingleResult();

	    // 3. Employees from Pune
	    em.createQuery("SELECT e FROM Employees e WHERE e.address = 'Pune'", Employees.class).getResultList();

	    // 4. Employees by name
	    em.createQuery("SELECT e FROM Employees e WHERE e.name = 'Ashutosh'", Employees.class).getResultList();

	    // 5. Get only names
	    em.createQuery("SELECT e.name FROM Employees e", String.class).getResultList();

	    // 6. Get name and address
	    em.createQuery("SELECT e.name, e.address FROM Employees e").getResultList();

	    // 7. Order by name ascending
	    em.createQuery("SELECT e FROM Employees e ORDER BY e.name ASC", Employees.class).getResultList();

	    // 8. Order by id descending
	    em.createQuery("SELECT e FROM Employees e ORDER BY e.id DESC", Employees.class).getResultList();

	    // 9. Count total employees
	    em.createQuery("SELECT COUNT(e) FROM Employees e", Long.class).getSingleResult();

	    // 10. Name starts with ‘A’
	    em.createQuery("SELECT e FROM Employees e WHERE e.name LIKE 'A%'", Employees.class).getResultList();

	    // 11. ID between range
	    em.createQuery("SELECT e FROM Employees e WHERE e.id BETWEEN 10 AND 20", Employees.class).getResultList();

	    // 12. Get employee with max id
	    em.createQuery("SELECT e FROM Employees e WHERE e.id = (SELECT MAX(e2.id) FROM Employees e2)", Employees.class).getSingleResult();

	    // 13. Update address (JPQL bulk update)
	    em.createQuery("UPDATE Employees e SET e.address = 'Mumbai' WHERE e.id = 1").executeUpdate();

	    // 14. Delete by address
	    em.createQuery("DELETE FROM Employees e WHERE e.address = 'Nashik'").executeUpdate();

	    // 15. Group by address with count
	    em.createQuery("SELECT e.address, COUNT(e) FROM Employees e GROUP BY e.address").getResultList();

	    
	tra.commit();
}
}
