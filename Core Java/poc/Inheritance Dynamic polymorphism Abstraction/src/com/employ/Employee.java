package com.employ;

public class Employee {
     int id;
     String name;
     double salary;
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public double getSalary() {
		return salary;
	}
	public void setSalary(double salary) {
		this.salary = salary;
	}
	 public Employee(int id, String name, double salary) {
		this.id = id;      
		this.name = name;
		this.salary = salary;
	}
	  public Employee() {
		// TODO Auto-generated constructor stub
	}
     
	public void display() {
		System.out.println("Id is   = "+this.id);
		System.out.println("Name is = "+this.name);
		System.out.println("Salary is = "+this.salary);
	}
	
	public double  calsal() {
		return this.salary;
	}
}
