package com.Mymap;

import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.Map.Entry;

public class BasicoponMap {

	
	public static void main(String[] args) {
		  Map<Integer, String> name = new HashMap<>();
		  name.put(1,"Ashutosh");
		  name.put(2,"Sanjay");
		  name.put(3,"Shelke");
		  
		  
		 System.out.println( name.keySet());
		 System.out.println( name.entrySet());
		 //  Iterator<String> itm=name.iterator();
		 
		 Iterator <Entry<Integer, String>> myitreter = name.entrySet().iterator();
		 
		while(myitreter.hasNext()) {
			
			Entry<Integer, String> values=myitreter.next();
			   if("shelke".equalsIgnoreCase(values.getValue())) {
				   System.out.println();
				   myitreter.remove();
			   }
		}
		
		System.out.println(name);
	}
	

}
