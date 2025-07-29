package com.Set;
import java.util.Set;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Scanner;

public class newmainapp {

	public static void main(String[] args) {
      Set <Account> name =new HashSet();
      name.add(new Account(85," Ashutosh",95));
      name.add(new Account(5,"Ashutosh",95));
      name.add(new Account(8,"Shelke",85));
    //  System.out.println(name.size());
      Iterator<Account> ptr=name.iterator();
      while(ptr.hasNext()) {
	    	Account obj=ptr.next();
	    	if(obj.id==5) {
	    		ptr.remove();
	    	}
	    }
      
      
      Scanner sc=new Scanner(System.in);
      int size=sc.nextInt();
    Set <Account> accounts=new HashSet();
      for(int i=0;i<size;i++) {
    	  System.out.println("Enter account id = ");
    	  int id =sc.nextInt();
    	  System.out.println("Enter the name = ");
    	  String accname=sc.nextLine();
    	  System.out.println("Enter the salary = ");
    	  double balance=sc.nextDouble();
    	 accounts.add(new Account(id,accname,balance));
      }

     // System.out.println(name.size());
     
	}
	
	
	/*public static void removeAccount(Iterator<Account> ptr,int id) {
	    while(ptr.hasNext()) {
	    	Account obj=ptr.next();
	    	if(obj.id==id) {
	    		ptr=null;
	    		break;
	    	}
	    }
	}*/

}
