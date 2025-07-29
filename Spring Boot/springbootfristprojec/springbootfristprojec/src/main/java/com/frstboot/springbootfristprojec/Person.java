package com.frstboot.springbootfristprojec;

public class Person {

	String name;
	String Address;
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getAddress() {
		return Address;
	}
	public void setAddress(String address) {
		Address = address;
	}
	public Person(String name, String address) {
		super();
		this.name = name;
		Address = address;
	}
	
	
	
	
}
