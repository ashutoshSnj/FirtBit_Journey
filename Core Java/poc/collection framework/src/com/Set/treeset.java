package com.Set;

import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;
import java.util.TreeSet;

public class treeset {
	public static void main(String[] args) {
		
	Set<String> name =new TreeSet();
    name.add("A");
    name.add("Ashutosh");
    name.add("c");
    name.add("D");
   // System.out.println(name.size());
    //System.out.println(name);
  System.out.println(name);
  for(String ref:name) {
	  System.out.println(ref);
  }
   
  Set<Account> allacc=new TreeSet();
  allacc.add(new Account(12,"grbfvd",5));
    // Iterater is interface whenewer we creat a object of the collectio at that time 
    // Iterator object are created we add the object in the collection type object that time isaid 
    // itrater object addrese pointer are save 
     Iterator<String> itm=name.iterator();
  //   System.out.println(name.iterator());
   while(itm.hasNext()){
	  String values=itm.next();
	  if(values.equals("Ashutosh")) {
		  itm.remove();
	  }
	   //System.out.println(values);
   }
   System.out.println(name.size());
  // System.out.println(name);
    }
}

