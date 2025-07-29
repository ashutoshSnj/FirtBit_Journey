package com.Set;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

public class simpalset {
	

	public static void main(String[] args) {
	
	
		Set <String> ref= new HashSet();
		ref.add("ashu");
		ref.add("Shelke");
		ref.add("Sanjay");
		ref.add("Shubham");
		ref.add("Mahesh");
		ref.add("Dattu");
		ref.add("Rathod");
	
		//System.out.println(ref);
		for(String str:ref) {
			//System.out.println(str);
			if(str.equals("Dattu")) {
				//ref.remove(str);
			} 
		}
	
		Iterator<String> mypointer=ref.iterator();
	System.out.println(mypointer.hasNext());
	System.out.println(mypointer.next());
	}

}
