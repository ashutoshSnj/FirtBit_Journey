package com.string.builtin;

import java.util.Scanner;

public class char_replacement {

	public static void main(String[] args) {
		StringBuffer str=new StringBuffer("Ashutosh Shelke");
		 
		System.out.println("Enter the char = ");
		Scanner Sc=new Scanner (System.in);
		
		  char ch=Sc.next().charAt(0);
		  char replace=Sc.next().charAt(0);
		  for(int i=0;i<str.length();i++){
			  if(str.charAt(i)==ch) {
				  str.setCharAt(i, replace);
			  }
	}
		System.out.println(str);

         }
}
