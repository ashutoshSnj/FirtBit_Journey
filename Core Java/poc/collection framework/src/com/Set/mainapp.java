package com.Set;
import java.util.Set;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedList;

public class mainapp {
  
	public static void main(String[] args) {
		
		Set<String> name =new HashSet();
        name.add("A");
        name.add("Ashutosh");
        name.add("c");
        name.add("D");
        System.out.println(name.size());
        //System.out.println(name);
    
        
       for(String ref:name) {
        
        	if(ref.startsWith("A")) {
        		ref.replace('s', 'b');
        		System.out.println(ref);
        		//name.remove(ref);
        		// in set we cannnot remove the object in that why java give an
        		// exception like concurrent modificatione exception.
        	   // we need to itrater
        	}
        }
       
        // Iterater is interface whenewer we creat a object of the collection at that time internalyy 
       // itrater object mean object which is class impliment the itrater interface 
       // then we store the object in collection that time itreters object also store the this
       // ref/address of the object which is store in collection .
      
        // Iterator object are created we add the object in the collection type object that time is aid
       // ref. we remove the object from collection he also remove the ref
       
        
       
         Iterator<String> itm=name.iterator();
        // System.out.println(name.iterator());
       while(itm.hasNext()){
    	  String values=itm.next();
    	  if(values.equals("Ashutosh")) {
    		  itm.remove();
    		  
   // hear we fristlly we remove object which is store in collection then atomaticlly 
    		  // itreter also remove the ref of object
    		  
    	  }
    	   //System.out.println(values);
       }
       System.out.println(name.size());
       System.out.println(name);
        }

}
