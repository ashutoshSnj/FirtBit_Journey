package com.exp;
import java.util.Scanner;
import java.util.InputMismatchException;

public class mainapp {


	public static void main(String[] args) {
	  getno();
       
	}
	  public static void getno()  {
		  Scanner sc=new Scanner (System.in);
		  boolean alliswell=false;
		  
		  
	  while(alliswell==false) {
	try {
		System.out.println("Enter the no = ");
        int no =sc.nextInt();
        System.out.println("no is = "+no);
        alliswell=true;
        return;
	}
	catch(InputMismatchException ash) {
		System.out.println(ash);
		sc.next();
		System.out.println("you give wrong input "); 
	//ash.notify();
	}
	finally {
	       System.out.println("finalyy exicutd");
         }
	
   }
	  
	 
	  }
	  
	  
}
