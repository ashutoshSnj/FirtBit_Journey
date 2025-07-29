package com.Bank.Accounts;

public class wrongno extends   Exception{
	public wrongno(String msg) {
		super(msg);
	}
	public void inputagain() {
		System.out.println("Give correct input");
	}
}
