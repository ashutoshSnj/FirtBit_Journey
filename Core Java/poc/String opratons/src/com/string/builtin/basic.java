package com.string.builtin;

public class basic {

	public static void main(String[] args) {
		String str="Ashutosh shelke";
		String str1 ="";
		for(int i=str.length()-1;i>=0;i--) {
			str1+=str.charAt(i);
			// creat new string each time 
		}
		
		System.out.println(str1);
		sametask_usingStringBuffer(); 
		
	

	}
	public static void sametask_usingStringBuffer() {
		String str="Ashutosh Shelke";
		StringBuffer Str=new StringBuffer();
		for(int i=str.length()-1;i>=0;i--) {
			Str.append(str.charAt(i));
		}
		System.out.println(Str);
	}
	// String is mutable so 1 case each itration time creat new String 
	// Stringbuffer and builder is mutable so only one string is creat and
	// Each time add in that char

}
