package com.crud.opration;

import java.util.Scanner;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;


public class Allopration {
	Scanner  sc=new Scanner(System.in);
	Configuration cfg=new Configuration().configure("Hibernate.config.xml");
	SessionFactory ftr=cfg.buildSessionFactory();
	Session session=ftr.getCurrentSession();
	Transaction tra=session.beginTransaction();
	Student stu=new Student();
	public static void main(String[] args) {
		Allopration mainobj=new Allopration();
		//mainobj.select();
		//mainobj.update();
		mainobj.delete();
		
	}
	public void creat_insert() {
	
		System.out.println("Enter the name = ");
		stu.setName(sc.nextLine());
		System.out.println("Enter the Addres = ");
		stu.setAddress(sc.nextLine());
		session.persist(stu); 
		tra.commit();
		session.close();
	}
	public void select() {
		Student myst=session.get(stu.getClass(),1);
		System.out.println(myst.toString());
	}
	public void update() {
		System.out.println("Enter update addres = ");
		session.get(stu.getClass(),1).setAddress(sc.nextLine());
		tra.commit();
		session.close();
	}
	
	public void delete() {
	   
	    System.out.print("Enter the Student ID to delete: ");
	    int id = sc.nextInt();
	    Student studentToDelete = session.get(Student.class, id); // Fetch the student by ID

	        session.delete(studentToDelete); // Delete the student
	        tra.commit(); // Commit the transaction
	        System.out.println("Student with ID " + id + " has been deleted successfully!");
	    session.close(); // Close the session
	}


}
