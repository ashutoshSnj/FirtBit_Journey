package com.abstrac;

public class Saving_Account extends Account {

	
 public Saving_Account() {
	// TODO Auto-generated constructor stub
}
 

	public Saving_Account(double balance, int ac_no, String holder_name) {
		super(balance, ac_no, holder_name);
	
	}

	public void Withdroall(Double price) {
		this.balance-=price;
		
	}

}
