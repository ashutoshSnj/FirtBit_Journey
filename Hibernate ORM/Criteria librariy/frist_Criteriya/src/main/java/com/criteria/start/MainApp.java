package com.criteria.start;

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
        
        //Sesssion 1 = jpa code
        CriteriaBuilder builder=session.getCriteriaBuilder(); //session.createQuery();
        CriteriaQuery<User> jpaQuery=builder.createQuery(User.class);
   
        Root<User> base=jpaQuery.from(User.class);
        //select * from user
       // jpaQuery.select(base); this is not execution of query
        
      // select * from users where password >8587965
        
        jpaQuery.select(base).where(builder.gt(base.get("password"),4587965 ));
     
        
       // Section 2:Hibernate code
        Query<User> ormQuery=session.createQuery(jpaQuery);
        List <User> users=ormQuery.getResultList(); // this is where the query will exicut
        for(User ref:users) {
        	System.out.println(ref.getUsername());
        }
        
        transaction.commit();
        session.close();
	}

}
