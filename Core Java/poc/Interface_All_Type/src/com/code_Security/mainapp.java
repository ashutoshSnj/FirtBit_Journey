package com.code_Security;

public class mainapp {
	
  
	public static void main(String[] args) {
		payebal [] allemp= new payebal[] {new Developer(),new Hr() ,new contracter() };
		// they are class impliment the role of interface 
		// we achive the code security like contracter not part of the employee hirarcy 
		// the does not acceses the employee class method  this senario show
		// the code security in interface 
		
		mainapp ref =new mainapp();
		ref.salarypay(allemp);
	}

	
	private void salarypay(payebal[] allemp) {
	//for each loop
	for(payebal ref:allemp) {
		ref.pay();
	}
		
	}
}
