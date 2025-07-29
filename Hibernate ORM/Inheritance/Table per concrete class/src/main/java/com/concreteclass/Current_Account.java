package com.concreteclass;



import jakarta.persistence.Entity;
import jakarta.persistence.Table;

@Entity
@Table(name="Current_ac_Table_per_Concret_class")

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
