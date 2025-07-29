package com.string.builtin;

public class Anagram {

	public static void main(String[] args) {
	  String str="ashutosh";
	  String ptr="ashutpsh";
	  
	  if(str.length()!=ptr.length()) {
		  System.out.println("not anagram");
		  
	  }
	  else {
		 for(int i=0;i<str.length();i++) {
			 
			 int flag=0;
			 for(int j=0;j<ptr.length();j++) {
				  if( str.charAt(i)==ptr.charAt(j)) {
					 flag=1;
					 break;
				  }  
			 }
			 if(flag!=1) {
				 System.out.println(" String not anagram");
				return;
			 }
		 }
	
	  }

	}

}
