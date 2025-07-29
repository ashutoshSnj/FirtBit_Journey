package com.TreeSet.my;
import java.util.Iterator;
import java.util.Set;
import java.util.TreeSet;


public class mainapp {
	public static void main(String[] args) {
		
	  Set<Account> allacc=new TreeSet<Account>();
	  allacc.add(new Account(1,"Ashutosh shelke",8952));
	  allacc.add(new Account(12,"Shubham G",563));
	  allacc.add(new Account(4,"Mahesh",525));
	  allacc.add(new Account(9,"Prashant",563));
	  allacc.add(new Account(6,"Mahesh",525));
	 // allacc.add(new Account(5,"shelke as ",58545));
	
	for(Account ref:allacc) {
		System.out.println(ref);
		if(ref.name.equals("Prashant")) {
		}
	}
	Iterator <Account> newitrater=allacc.iterator();
  while(newitrater.hasNext()) {
	 Account values=newitrater.next();
	 if(values.getBalance()>500) {
		 values.setBalance(784596);
	 }
  }
  // same task useing stram api
  allacc.stream().filter(ref->ref.getBalance()>500).forEach(ref->ref.setBalance(784596));
}
      }
