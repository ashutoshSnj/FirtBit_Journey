package com.wildtable;
import jakarta.persistence.DiscriminatorValue;
import jakarta.persistence.Entity;

@Entity
@DiscriminatorValue(value="Saving_Account")
public class Saving_Account extends Account {
	double min_balance;
	
      public Saving_Account(String id, String name, String balance,double minbal) {
		super(id, name, balance);
		this.min_balance=minbal;
	}

	public double getMin_balance() {
		return min_balance;
	}

	public void setMin_balance(double min_balance) {
		this.min_balance = min_balance;
	}
      
      
}
