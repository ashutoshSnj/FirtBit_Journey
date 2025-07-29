package com.and_or_Oprations;

import java.util.List;

import org.hibernate.Session;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;
import org.hibernate.query.Query;

import jakarta.persistence.criteria.CriteriaBuilder;
import jakarta.persistence.criteria.CriteriaQuery;
import jakarta.persistence.criteria.Root;

public class MainApp {
public static void main(String[] args) {
	Session session=new Configuration().configure("hibernate.config.xml").buildSessionFactory().openSession();
  Transaction transaction=session.beginTransaction();
  Students student=new Students(26,"Ashutosh Shelke",52.60,79.85,79.60,"Sungamner","Computer Engineering");
  //session.persist(student);
 CriteriaBuilder criteria= session.getCriteriaBuilder();
 CriteriaQuery<Students> JpaQuery=criteria.createQuery(Students.class);
 Root<Students> base=JpaQuery.from(Students.class);
 // select * from Students
       JpaQuery.select(base);
 // select * from Students where Degree_percentage<75;
      // JpaQuery.select(base).where(criteria.gt(base.get("Degree_Percentage"),75)); 
 // Select rollno,name from students where hsc_percentage>60;
       JpaQuery.multiselect(base.get("rollno"),base.get("name")).where(criteria.lt(base.get("Hsc_Percentage"), 60));
// Select * from students where Degree_marks>75 && branch="Computer_Science"
    // Apply the AND condition correctly
       JpaQuery.select(base).where(
           criteria.and(
               criteria.gt(base.get("Degree_Percentage"), 75), // Degree_Percentage > 75
               criteria.equal(base.get("Branch"), "Computer Science") // Branch = "Computer Science"
           )
       );

       
//
  Query<Students> hibernatq=session.createQuery(JpaQuery);
  List<Students> result=hibernatq.getResultList();
  for(Students ref:result) {
	 
	  System.out.println(ref.toString());
  }
  transaction.commit();
  session.close();
}
}
