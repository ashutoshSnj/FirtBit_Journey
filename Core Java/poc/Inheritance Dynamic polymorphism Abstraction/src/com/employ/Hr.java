package com.employ;

public class Hr extends Employee {
   double Commision;
   
	 public Hr(int id, String name, double salary,double Commision) {
		super(id, name, salary);
		this.Commision=Commision;

	}
	 public Hr() {
		// TODO Auto-generated constructor stub
	}
	 
	public double getCommision() {
		return Commision;
	}
	public void setCommision(double commision) {
		Commision = commision;
	}
	@Override
	public void display() {
		// TODO Auto-generated method stub
		super.display();
		System.out.println("Commision is = "+this.Commision);
	}
	@Override
	public double calsal() {
		return this.getSalary()+this.Commision;
	}
	 

}
