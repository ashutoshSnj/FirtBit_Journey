package com.interfa;

public class Hr extends Employee  implements verify{
	 double commision;
	 
	public Hr() {
		super();
		// TODO Auto-generated constructor stub
	}

	public Hr(int id, String name, double salary,double commision) {
		super(id, name, salary);
		this.commision=commision;
		//  TODO Auto-generated constructor stub
	}
	 public  void prientable() {
		 System.out.println("Hr call");
	 }


	public void asss() {
		// TODO Auto-generated method stub
		
	}

	
}
