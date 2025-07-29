package com.Set;

public class Account {
	int id;
	String name;
   double  balance;
public Account() {

   }


public Account(int id, String name, double balance) {
	this.id = id;
	this.name = name;
	this.balance = balance;
}


public int getId() {
	return id;
}

public void setId(int id) {
	this.id = id;
}

public String getName() {
	return name;
}

public void setName(String name) {
	this.name = name;
}

public double getBalance() {
	return balance;
}

public void setBalance(double balance) {
	this.balance = balance;
}



public String toString() {
	return "Account{id=" + id + ", name='" + name + "', balance=" + balance + "}";
}



public int hashCode() {

	return this.id;
}

public boolean equals(Object obj) {
	Account ref=(Account) obj;
	if(ref.id==this.id) {
	  return true;
	}
	else {
		return false;
	}
}



   
}
