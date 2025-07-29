package com.crud.opration;

import java.util.Scanner;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;

public class MainApp {
	
	public static void main(String[] args) {
		Scanner  sc=new Scanner(System.in);
		Configuration cfg=new Configuration().configure("Hibernate.config.xml");
		SessionFactory ftr=cfg.buildSessionFactory();
		Session ses=ftr.getCurrentSession();
		Transaction tra=ses.beginTransaction();
		// insertion
		/*Student stu=new Student();
		System.out.println("Enter the name = ");
		stu.setName(sc.nextLine());
		System.out.println("Enter the Addres = ");
		stu.setAddress(sc.nextLine());
		ses.persist(stu); 
		tra.commit();*/
		// select opration
		System.out.println(ses.get(Student.class,1).toString());
		ses.close();
		
		
	}
  
}
