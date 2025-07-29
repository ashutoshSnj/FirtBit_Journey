package com.Set;

import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

public class myIterator {

	public static void main(String[] args) {
   Set <Account> newacc=new HashSet<>();
      newacc.add(new Account(1,"shelke",56963));
      newacc.add(new Account(2,"ashutosh",56963));
      newacc.add(new Account(3,"sanjay",56963));
      System.out.println(newacc.size());
      Iterator <Account> itr=newacc.iterator();
      newacc.add(new Account(5,"shelke",956));
      while(itr.hasNext()) {
    	 itr.next();
    	 //System.out.println(itr.next());
      }
      
   
   
   
   
   
	}

}
