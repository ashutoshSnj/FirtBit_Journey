package com.inheritance_table_per_subclass;

import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.Id;
import jakarta.persistence.Inheritance;
import jakarta.persistence.InheritanceType;
import jakarta.persistence.Table;

@Entity
@Table (name="Account_table_per_subclass")
@Inheritance(strategy=InheritanceType.JOINED)

public abstract class Account {
	@Id
	@Column (name="Account_no")
   String Account_no;
	@Column (name="name")
   String name;
	@Column (name="Balance")
   String Balance;
public Account(String id, String name, String balance) {
	super();
	this.Account_no = id;
	this.name = name;
	Balance = balance;
}
public String get_Account_no() {
	return Account_no;
}
public void set_Account_no(String id) {
	this.Account_no = id;
}
public String getName() {
	return name;
}
public void setName(String name) {
	this.name = name;
}
public String getBalance() {
	return Balance;
}
public void setBalance(String balance) {
	Balance = balance;
}
   public Account() {
	// TODO Auto-generated constructor stub
}
}
