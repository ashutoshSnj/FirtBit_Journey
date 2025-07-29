package com.spring.start.Spring_Boot_Complete;

public class Person {
   String name;
   int id;
   
   public Person() {
	// TODO Auto-generated constructor stub
}
public Person(String name, int id) {
	super();
	this.name = name;
	this.id = id;
}
public String getName() {
	return name;
}
public void setName(String name) {
	this.name = name;
}
public int getId() {
	return id;
}
public void setId(int id) {
	this.id = id;
}
   
}
