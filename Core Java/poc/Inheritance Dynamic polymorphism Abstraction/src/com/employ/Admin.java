package com.employ;

public class Admin extends Employee {
	double Allowance;
	

	public Admin(int id, String name, double salary,double Allowance ) {
		super(id, name, salary);
		this.Allowance=Allowance;
		// TODO Auto-generated constructor stub
	}

	public Admin() {
		// TODO Auto-generated constructor stub
	}

	public double getAllowance() {
		return Allowance;
	}

	public void setAllowance(double allowance) {
		Allowance = allowance;
	}

	@Override
	public void display() {
		// TODO Auto-generated method stub
		super.display();
		System.out.println("Allowance is = "+this.Allowance);
	}

	@Override
	public double calsal() {
		// TODO Auto-generated method stub
		return this.getSalary()+this.Allowance;
	}
	

}
