package com.List;
import java.util.ArrayList;
import java.util.List;
import java.util.Set;
import java.util.Iterator;
public class mainapp {

	public static void main(String[] args) {
 // list interface ref and arraylist class object 
		
	List<Account> ass=new ArrayList<>();
	List<Account>ref=new ArrayList();
	List<Account>deletedobj=new ArrayList();
	
	 

	ref.add(new Account(124,"ashutosh",78596));
	ref.add(new Account(12,"shelke",956));
	System.out.println(ref.size());
	 for(int i=0;i<ref.size();i++) {
		 System.out.println(ref.get(i));
	
		 
		 if(ref.get(i).name.equals("ashutosh")){
		     ref.remove(i);
	 }
	// deletedobj.add(ref.remove(0));
		 System.out.println(ref.size());
		 Iterator <Account > myitr= ref.iterator();
		while(myitr.hasNext()) {
			//for (Iterator <Account > newitr:myitr.next()){
				
			//}
			Account values=myitr.next();
			if(values.balance<=7859) {
				values.setBalance(87855);
			}
			
			
		}


	}
	}
}
