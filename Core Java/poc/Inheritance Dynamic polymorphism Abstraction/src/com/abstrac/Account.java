package com.abstrac;

public abstract class Account {
  double balance;
  int ac_no;
  String Holder_name;
public double getBalance() {
	return balance;
}
public void setBalance(double balance) {
	this.balance = balance;
}
public int getAc_no() {
	return ac_no;
}
public void setAc_no(int ac_no) {
	this.ac_no = ac_no;
}
public String getHolder_name() {
	return Holder_name;
}
public void setHolder_name(String holder_name) {
	Holder_name = holder_name;
}
  public Account() {
	 
}
public Account(double balance, int ac_no, String holder_name) {
	super();
	this.balance = balance;
	this.ac_no = ac_no;
	Holder_name = holder_name;
}
  public void Dipposit(double  Balance) {
	  this.balance=this.balance+Balance;
  }
  public abstract void  Withdroall(Double price);
  
}
