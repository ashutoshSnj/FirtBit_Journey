package com.exp;

import java.util.InputMismatchException;
import java.util.Scanner;

public class mainapp2 {

	public static void main(String[] args) {
	  getno();
       
	}
	  public static void getno()  {
		  Scanner sc=new Scanner (System.in);
		  boolean alliswell=false;
		  
		  
		  
	 /* while(alliswell==false) {
	try {
		System.out.println("Enter the no = ");
        int no =sc.nextInt();
        System.out.println("no is = "+no);
        alliswell=true;
        //return;
	}
	catch(InputMismatchException ash) {
		sc.next();
		
		System.out.println("you give wrong input "); 
	//ash.notify();
	}
	finally {
	       System.out.println("finalyy exicutd");
           }
	  }
	  
	  try {
		  System.out.println("Enter the String  = ");
		 // sc.next();
		   //String str=sc.nextLine();
		  int no=sc.nextInt();
		  
	  }
	 finally {
		System.out.println("also print ");
	}*/
		  
		  try {
				System.out.println("Enter the no = ");
		        int no =sc.nextInt();
		        System.out.println("no is = "+no);
		        alliswell=true;
		        //return;
			}
			catch(InputMismatchException ash) {
				System.out.println("you give wrong input "); 
			//ash.notify();
			}
			finally {
			       System.out.println("finalyy exicutd");
		           }
			  
			  
			  try {
				  System.out.println("Enter the String  = ");
				  sc.next();
				   //String str=sc.nextLine();
				  String nm=sc.nextLine();
				  
			  }
			  catch(InputMismatchException ash) {
					sc.next();
					
					System.out.println("you give wrong input "); 
				//ash.notify();
				}																									
			 finally {
				System.out.println("also print ");
			}
	  }
	  

}
