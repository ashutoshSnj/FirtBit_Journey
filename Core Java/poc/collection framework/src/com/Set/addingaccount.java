package com.Set;

import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class addingaccount {

	public static void main(String[] args) {
		 Scanner sc=new Scanner(System.in);
		 System.out.println("Enter the no = ");
	      int size=sc.nextInt();
	    Set <Account> accounts=new HashSet();
	      for(int i=0;i<size;i++) {
	    	  System.out.println("Enter account id = ");
	    	  int id =sc.nextInt();
	    	  System.out.println("Enter the name = ");
	    	  sc.next();
	    	  String accname=sc.nextLine();
	    	  System.out.println("Enter the salary = ");
	    	  double balance=sc.nextDouble();
	    	 accounts.add(new Account(id,accname,balance));
	      }

	     // System.out.println(name.size());
	      
		}
	

}
