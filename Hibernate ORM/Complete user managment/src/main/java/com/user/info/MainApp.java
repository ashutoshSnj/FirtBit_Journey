package com.user.info;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;



public class MainApp {

     public static void main(String [] args) {
    	 Configuration config=new Configuration().configure("hibernate.config.xml");
         SessionFactory sessionfactory=config.buildSessionFactory();
         Session session=sessionfactory.openSession();
         Transaction transaction =session.beginTransaction();
        
        // User user=new User("ashutosh.snj","Shelke123");
       //  User user1=new User("Shelke.snj","Pass");
        
         //add crud
        // session.persist(user1);
         //retrive
         
         User ref=session.get(User.class, "ashutosh.snj");
 		System.out.println(ref.getPassword());
 		/*
     User ref=session.getReference(User.class,"sdf");
 		System.out.println(ref.getPassword());
 		//update
 		User obj=session.get( User.class,"df");
	     ref.setPassword("ashu79");*/
	     //Delete
	    /* User deleteobj=(User) session.getReference(User.class,"ashutosh.snj");
	     session.delete(deleteobj);*/
         
	     User obj=new User("Ashutosh.h","Shelke@",new Address("Akole","Sungamner"));
	     session.persist(obj);
 		
 		
         
         
    
         transaction.commit();
         session.close();
         
         
         
         
     }
      
      
}
