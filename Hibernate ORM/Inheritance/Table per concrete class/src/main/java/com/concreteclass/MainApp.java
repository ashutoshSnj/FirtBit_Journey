package com.concreteclass;

import org.hibernate.Session;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;


public class MainApp {
	 public static void main(String[] args) {
     	Account saving=new Saving_Account("1","Ashutosh","12563",253.23);
         Account curent=new Current_Account("1","Shelke","12563",253.23);
     	Session session=new Configuration().configure("hibernate.config.xml").buildSessionFactory().openSession();
        Transaction transaction=session.beginTransaction();
        session.persist(saving);
        //session.persist(curent);
        transaction.commit();
        session.close();
        
        
     }
}
