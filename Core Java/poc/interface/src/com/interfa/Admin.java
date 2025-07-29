package com.interfa;

public class Admin extends Employee  {
	double allowance;
	

	public Admin() {
		super();
		// TODO Auto-generated constructor stub
	}


	public Admin(int id, String name, double salary,double all) {
		super(id, name, salary);
		this.allowance=all;
		
	}


	@Override
	public void prientable() {
		System.out.println("Admin are call");
	}
	
}
