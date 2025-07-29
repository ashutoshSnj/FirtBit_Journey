package com.code_Security;

public abstract  class Employee implements payebal {
  int id ;
   String name;
   Double Salary;
public Employee(int id, String name, Double salary) {
	super();
	this.id = id;
	this.name = name;
	Salary = salary;
}
   public Employee() {
	// TODO Auto-generated constructor stub
}
   public abstract void pay();
}
