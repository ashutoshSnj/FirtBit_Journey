package com.maven.frist;



import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;

public class MainApp  {
	public static void main(String[] args) {
		newuser user=new newuser("asg","pas123");
		Book books=new Book("9","nbir ");
		
		Configuration cfg=new Configuration();
		cfg.configure("Hibernate.config.xml");
		// sessionfactry mean it hold the db configration mapping which is heavy weight object and thread safe
		// Usually only one in application 
		SessionFactory factory=cfg.buildSessionFactory();
		// sessionfactry is a interface, configuration class  buildsessionfactry method return a object 
		// which object class implement the Sessionfactry interface 
		
		// this is same for session interface 
		
		Session ses=factory.openSession();
		// session mean the actual comunication of db means hibernat communicat db 
		Transaction tr=ses.beginTransaction();
		//Session ses1=new Configuration().configure("Hibernate.config.xml").buildSessionFactory().openSession();
		//ses.persist(user);
		/*newuser ref1=ses.get(newuser.class, "df");
		System.out.println(ref1.getPass());*/
		
		newuser ref=(newuser) ses.getReference(newuser.class,"sdf");
		     // System.out.println(ref.getUsername());
		//update
		newuser obj=ses.get( newuser.class,"df");
		     ref.setPass("shelke");
		     // delete
		     ses.delete(ref);
		//ses.saveOrUpdate(newuser.class,);
	
		//ses.persist(books);
		
		//System.out.println(id);
	
		tr.commit();
		ses.close();
		
	}

}
