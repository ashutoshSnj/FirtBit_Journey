package com.employ;

public class Salsemanager extends Employee {
	double Incentive;
	int Target;

	public Salsemanager(int id, String name, double salary,double Incentive,int target) {
		
		super(id, name, salary);
		this.Incentive=Incentive;
		this.Target=target;
		// TODO Auto-generated constructor stu
	}

	public Salsemanager() {
		// TODO Auto-generated constructor stub
	}

	public double getIncentive() {
		return Incentive;
	}

	public void setIncentive(double incentive) {
		Incentive = incentive;
	}

	public int getTarget() {
		return Target;
	}

	public void setTarget(int target) {
		Target = target;
	}

	@Override
	public void display() {
		// TODO Auto-generated method stub
		super.display();
		System.out.println("Incentive is = "+this.Incentive);
		System.out.println("Target is = "+this.Target);
	}

	@Override
	public double calsal() {
		// TODO Auto-generated method stub
		return this.getSalary()+this.getIncentive();
	}

}
