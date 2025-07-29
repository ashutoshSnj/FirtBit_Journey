package Builtinmethods;

public class tostringmethod {

	public static void main(String[] args) {
	    // this  method of object class which is overrride in our 
		// class to give the representation string  of our object in one string. 
		// bydefoult this method  is give the like class name @ hashvalue of object
		// then we override it and give the actual containt trough string  
	// String class this method does not override becose 
		
		
  //In Java, the String class does not override the toString() method from the Object class. 
		//The default implementation of toString() in the Object class returns
		//a string representation of the object, which includes the class name and the o
		//bject's hash code. However, for String objects, this default behavior
		//is not overridden because a 
		//String object inherently represents a sequence of characters. 
		//Therefore, calling toString() on a String object returns the string itself.
		
		String str="Ashutosh";
		System.out.println(str);
		// output Ashutosh
   StringBuffer  str1= new StringBuffer("Ashutosh");
   System.out.println(str1);

	}

	
	

}
