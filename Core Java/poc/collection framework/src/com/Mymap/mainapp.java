package com.Mymap;

import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.stream.Collectors;



public class mainapp {

	
	public static void main(String[] args) {
		Map<String,String>  movie=new HashMap();
		movie.put("name","3 idiot");
		movie.put("Lead Actor","Amir khan");
		movie.put("Said Actor", " R.Madhvan");
		//System.out.println(movie.get("Lead Actor"));
		//System.out.println(movie);
	 //	System.out.println(movie.keySet());
	 	
		//  Iterator<String> itm=name.iterator();
		Iterator<Map.Entry<String, String>> myitr=movie.entrySet().iterator();
		
		while(myitr.hasNext()) {
			//Account values=myitr.next();
		       Map.Entry<String,String> val=myitr.next();
		       if(val.getValue().equals("R.madhvan")) {
		    	   myitr.remove();
		       }
		}
		// Stram api
	
		 movie.entrySet().stream().filter(ref->ref.getKey().equals("Lead Actor")).forEach(ref->System.out.println(ref.getValue()));
		 Map<String,String>  movie2= movie.entrySet().stream().filter(ref->ref.getKey().equals("Lead Actor")).collect(Collectors.toMap(ref->ref.getKey(),ref->ref.getValue()));
	      System.out.println(movie2);
	}
}
