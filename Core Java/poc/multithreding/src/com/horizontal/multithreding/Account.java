package com.horizontal.multithreding;

import java.util.Scanner;

public class Account {
   int actId;
   String actName;
   float balance;
public Account(int actId, String actName, float balance) {
	super();
	this.actId = actId;
	this.actName = actName;
	this.balance = balance;
}
   public Account() {
	
}
public int getActId() {
	return actId;
}
public void setActId(int actId) {
	this.actId = actId;
}
public String getActName() {
	return actName;
}
public void setActName(String actName) {
	this.actName = actName;
}
public float getBalance() {
	return balance;
}
public void setBalance(float balance) {
	this.balance = balance;
}
   public synchronized void  withdraw() {
	   Scanner sc=new Scanner(System.in);
	   System.out.println(" this is withdrow Balance is "+balance+"from thread"+Thread.currentThread().getName());
	   Float acceptbalance=sc.nextFloat();
	   this.balance=balance - acceptbalance;
	   try {
		Thread.sleep(1000);
	} catch (InterruptedException e) {
		// TODO Auto-generated catch block
		e.printStackTrace();
	}
	   
   }
}
