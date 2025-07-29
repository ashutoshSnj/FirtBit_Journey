package com.test;

public class reverseString {

	public static void main(String[] args) {
		
		String str="one two three";
		String [] str1=str.split(" ");
		// System.out.println(str1.length);
		  StringBuilder b1= new StringBuilder ();	
		 for(int i=str1.length-1;i>=0;i--) {
			 b1.append(str1[i]).append(" ");
		 }
		// System.out.println(b1);
		 str();
		 
		  
	}
	
	public static void str() {
		
		String str="one two three";
		String [] str1=str.split(" ");
		
		//  StringBuilder b1= new StringBuilder ();	
		 String St="";
		
		 for(int i=str1.length-1;i>=0;i--) {
			 St.concat(str1[i]).concat(" ");
		 }
		 System.out.println(St);
		 
		 for(int i=0;i<str.length();i++) {
			   
			 
		 }
	}

}

