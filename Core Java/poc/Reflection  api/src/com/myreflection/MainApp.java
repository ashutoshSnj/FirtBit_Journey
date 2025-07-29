package com.myreflection;

import java.lang.reflect.Constructor;
import java.lang.reflect.Field;
import java.lang.reflect.Method;

public class MainApp {
	public static void main(String[] args) {
		System.out.println(args[0]);
		EntytyClass str=new EntytyClass(12,"Ashutosh");
		Class myclass= str.getClass();
	
		// Inspecting the methods
		 Method[] mymethod=myclass.getDeclaredMethods();
		 for(Method newmethod:mymethod){
			 System.out.println(newmethod);
		 }
		 Constructor[] mycounstructers=myclass.getDeclaredConstructors();
		 for(Constructor newcounstructer:mycounstructers){
			 System.out.println(newcounstructer);
		 }
///////////////////////////////////////////////////////////////////////////////////////////////
		
		 // we accses the private attributes
			try {
				Field namefild=myclass.getDeclaredField("name");
				namefild.setAccessible(true);
				namefild.set(str,"Shelke");
				System.out.println(str.toString());
				
			} catch (NoSuchFieldException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			} catch (SecurityException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			} catch (IllegalArgumentException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			} catch (IllegalAccessException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
//////////////////////////////////////////////////////////////////////////////////////////
			
			
	        // Dynamically invoking the "getName" method using reflection
	        try {
	            // Get the method "getName" that takes no arguments
	            Method getNameMethod = myclass.getDeclaredMethod("getName");

	            // Invoke the "getName" method on the str object
	            String name = (String) getNameMethod.invoke(str);
	          
	            // Output the result of getName() method
	            System.out.println("Name from getName method: " + name);
	        } catch (Exception e) {
	            e.printStackTrace();
	        }
		
		 
	}
	     

}
