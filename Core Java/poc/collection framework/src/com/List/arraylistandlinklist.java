package com.List;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;

public class arraylistandlinklist {

	public static void main(String[] args) {
		linkedlist();
		//arraylist();
		
	}
   public static void arraylist() {
	   List<Account> ref=new ArrayList<Account>();
		ref.add(new Account(1,"shelke",956));
       ref.add(new Account (2,"Ashutosh",845));
     ref.add(new Account(3,"Shubham",562));
     ref.add(2,new Account(78,"dattu",956));
     System.out.println(ref);
 
       for(int i=0;i<ref.size();i++) {
       	System.out.println(ref.get(i).toString());
      }
   }
   public static void linkedlist() {
	   List <Account>ref=new LinkedList(); 
	   System.out.println(ref.size());
	   ref.add(new Account(4,"shelke",87451));
	   ref.add(new Account (2,"Ashutosh",845));
	   //  ref.add(1, new Account(3,"Shubham",562));
	     ref.add(new Account(5,"Naguuu",-8451));
	     ref.add(0,new Account(78,"dd",854));
	     System.out.println(ref);
	  //  ref.remove(2);
	     
	    	    
	     System.out.println(ref.size());
	    for(int i=0;i<ref.size();i++) {
	    	System.out.println(ref.get(i).toString());     
   }
   }
}
