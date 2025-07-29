package com.string.builtin;

import java.util.Scanner;

public class reverseString {

	public static void main(String[] args) {
	  Scanner sc=new Scanner(System.in);
	  String string=sc.nextLine();
	  StringBuffer str=new StringBuffer(string);
	  int j=str.length()-1;
	  for(int i=0;i<str.length()/2;i++) {
		    char temp=str.charAt(i);
		    //System.out.println("*");
		    str.setCharAt(i, str.charAt(j));
		    str.setCharAt(j, temp);
		    j--;
		    
	  }
      System.out.println(str);
	}

}
