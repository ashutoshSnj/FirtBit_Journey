package treemap;

import java.util.Iterator;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;
import java.util.TreeMap;

public class Mainapp {

	public static void main(String[] args) {

		Map<String,Account> acc=new TreeMap<String ,Account>();
		  acc.put("Acc", new Account(1,"Ashutosh",845120));
		  acc.put("maha", new Account(2,"Sanjay",845120));
		  acc.put("Icc", new Account(3,"Shelke",845120));
		  acc.put("hdfc", new Account(4,"Pune",845120));
		
		/*  System.out.println(acc.size());
		  Set<Entry<String,Account>> data=acc.entrySet();
		  for(Entry<String,Account> ref:data) {
			  if(ref.getValue().getName().equalsIgnoreCase("Ashutosh")) {
				// acc.remove(ref.getKey());
			  }
		  }*/
	Iterator <Entry<String,Account>> ref=acc.entrySet().iterator();
	         while(ref.hasNext()) {
	        	 Entry<String,Account> value=ref.next();
	        	      if( value.getValue().getName().equalsIgnoreCase("Ashutosh")) {
	        	    	  ref.remove();
	        	    	  
	        	    	  value.getValue().setName("ash");
	        	      }
	        	      
	         }
		  
		  System.out.println(acc.size());

	}

}
