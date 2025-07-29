     package com.sport;

import java.util.HashSet;
import java.util.Set;

import org.hibernate.Session;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;



public class MainApp {
   public static void main(String[] args) {
	    Set<Player> allplayers=new HashSet<Player>();
	    Team team=new Team("MI","India","Tendulkar",allplayers);
	    Player myplayer=new Player("msd","7",team);
	    allplayers.add(myplayer);
	    allplayers.add(new Player("virat","18",team));
	    allplayers.add(new Player("Rohit","45",team));
	    Session session= new Configuration().configure("hibernate.config.xml").buildSessionFactory().openSession();
	    Transaction transaction=session.beginTransaction();
	    session.persist(team);
	  
	    
	    transaction.commit();
	    session.close();
	    
   }
}
