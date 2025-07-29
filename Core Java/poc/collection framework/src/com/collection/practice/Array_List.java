package com.collection.practice;

import java.util.ArrayList;
import java.util.List;

public class Array_List {
      
      public static void main(String[] args) {
    	  List <Account> obj=new ArrayList();
    	  obj.add(new Account(1,"Ashutosh Shelke",4521.62));
    	  obj.add(new Account(2,"Ashutosh Shelke",4521.62));
    	  obj.add(new Account(2,"Ashutosh Shelke",4521.62));
    	  obj.add(new Account(2,"Shelke",4521.62));
    	  obj.add(new Account(5,"Ashutosh Shelke",4521.62)); 
    	  for(int i=0;i<6;i++) {
    		  obj.add(new Account(1,"Ashutosh Shelke",4521.62));
    		  if(obj.get(i).getId()==1) {
    			  obj.get(i).setName("Shelke");
    			 
    		  }
    		  if(obj.get(i).getId()==2) {
    			  obj.remove(i);
    		  }
    	  }
    	  obj.removeIf(ref->ref.getId()==2);
    	 
    	 
    	  System.out.println(obj);
	}
}
