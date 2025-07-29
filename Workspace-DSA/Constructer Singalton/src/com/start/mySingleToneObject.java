package com.start;

public class mySingleToneObject {
	 private static mySingleToneObject ref;
	
	private mySingleToneObject() {
		System.out.println("we called ");
	}
	public static mySingleToneObject getobj() {
		if(ref==null) {
			ref= new mySingleToneObject();
		}
		return ref;
	}

}
