package com.string.Stringbuffer;

import java.util.Scanner;

public class remove_Spacial_Symbol {
   public static void main(String[] args) {
	   Scanner sc=new Scanner(System.in);
	   System.out.println("Enter the String = ");
	 StringBuffer string=new StringBuffer(sc.nextLine());
	
	 for(int i=0;i<string.length();i++) {
		 if(!Character.isLetterOrDigit(string.charAt(i))) {
			 string.deleteCharAt(i);
		      i--;
		 }
	 }
	 System.out.println(string);
} 
}
