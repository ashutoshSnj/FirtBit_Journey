package com.wildtable;


import jakarta.persistence.DiscriminatorValue;
import jakarta.persistence.Entity;


@Entity
@DiscriminatorValue(value="Current_Account")
public class Current_Account extends Account{
	double credit_limit;

	public Current_Account() {
		// TODO Auto-generated constructor stub
	}
	
	public Current_Account(String id, String name, String balance,double limit) {
		super(id, name, balance);
		this.credit_limit=limit;
		// TODO Auto-generated constructor stub
	}

}
