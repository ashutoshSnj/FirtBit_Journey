package com.interfa;

public  abstract class Employee implements printable  {
 int id;
 String name;
 double salary;
 public Employee() {
	// TODO Auto-generated constructor stub
}
public Employee(int id, String name, double salary) {
	super();
	this.id = id;
	this.name = name;
	this.salary = salary;
}
  public  abstract void prientable();

}
