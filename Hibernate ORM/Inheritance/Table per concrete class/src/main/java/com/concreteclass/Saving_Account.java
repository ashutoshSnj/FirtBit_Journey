package com.concreteclass;



import jakarta.persistence.Entity;
import jakarta.persistence.Table;

@Entity
@Table(name="Saving_Ac_Table_per_Concret_class")

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
