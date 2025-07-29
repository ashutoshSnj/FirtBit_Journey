package com.start;

public class MainApp {
	 
	 public static void main(String[] args) {
	        MySingleton s1 = MySingleton.getInstance();
	        MySingleton s2 = MySingleton.getInstance();

	        System.out.println(s1 == s2);  // true → Both refer to the same object
	        
	        mySingleToneObject s3=mySingleToneObject.getobj();
	        mySingleToneObject s4=mySingleToneObject.getobj();
	        
	        System.out.println(s3 == s4);
	    }

}
