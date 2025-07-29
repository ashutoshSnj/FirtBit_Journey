package com.Bank.Accounts;

public class Current_Account extends Account {
	double overdraftLimitl;
	

	public Current_Account() {
		// TODO Auto-generated constructor stub
	}

	public Current_Account(int account_no, String holder_name, double balance ,double  overdraftLimit) {
		super(account_no, holder_name, balance);
		this.overdraftLimitl=overdraftLimit;
	}
	

	public double getOverdraftLimitl() {
		return overdraftLimitl;
	}

	public void setOverdraftLimitl(double overdraftLimitl) {
		this.overdraftLimitl = overdraftLimitl;
	}

	public void withdrow(double ammount) {
        if (getBalance() +this.overdraftLimitl>= ammount) {
            setBalance(getBalance() - ammount);
            System.out.println("Withdrawn: " + ammount);
        } else {
            System.out.println("Overdraft limit exceeded!");
        }
	}

	public double calculateInterest() {
		return 0;
	}

}
