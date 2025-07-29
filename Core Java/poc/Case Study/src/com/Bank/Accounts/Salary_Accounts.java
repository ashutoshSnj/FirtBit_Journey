package com.Bank.Accounts;

public class Salary_Accounts extends Account {
	static float Interest_rate=4.2f;

	
	
	public static float getInterest_rate() {
		return Interest_rate;
	}

	public static void setInterest_rate(float interest_rate) {
		Interest_rate = interest_rate;
	}

	public Salary_Accounts() {
		super();
		// TODO Auto-generated constructor stub
	}

	public Salary_Accounts(int account_no, String holder_name, double balance) {
		super(account_no, holder_name, balance);
		// TODO Auto-generated constructor stub
	}


	public void withdrow(double ammount) {
	    if(this.getBalance()>ammount) {
	    	 System.out.println("Ammount Successfully Withdrow ");
	    }
	    else {
	    	System.out.println("Insufficient balance.");
	    }
	}

	public double calculateInterest() {
		double interest = (getBalance()*Interest_rate) / 100;
		 setBalance(getBalance() + interest);
	        this.Balance += interest;
	        System.out.println("Interest Added: " + interest);
        return interest;
	
	}


	

}
