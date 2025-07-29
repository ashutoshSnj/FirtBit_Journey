package com.criteria.start;

import java.util.List;

import org.hibernate.Session;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;
import org.hibernate.query.Query;

import jakarta.persistence.criteria.CriteriaBuilder;
import jakarta.persistence.criteria.CriteriaQuery;
import jakarta.persistence.criteria.Root;

public class AnotherMainApp {
  public static void main(String[] args) {
	  
	Session session=new Configuration().configure("hibernate.config.xml").buildSessionFactory().openSession();
    Transaction transaction=session.beginTransaction();
	CriteriaBuilder criteri=session.getCriteriaBuilder();
	                                               // We select multipal record that why we use []
	CriteriaQuery<Object[]> jpaQuery=criteri.createQuery(Object[].class);
	Root<User> table=jpaQuery.from(User.class);
	
	jpaQuery.multiselect(table.get("username"),table.get("password"));
	
	Query<Object[]> query=session.createQuery(jpaQuery);
	List<Object[]> list=query.getResultList();
	for(Object[] ref:list) {
		System.out.println(ref[0]+" "+ref[1]);
	}

  }
}
