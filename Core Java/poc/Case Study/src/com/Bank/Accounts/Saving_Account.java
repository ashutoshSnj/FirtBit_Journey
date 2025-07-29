package com.Bank.Accounts;

public class Saving_Account extends Account {
	static float Interest_rate=3.2f;

	
	public Saving_Account() {
		super();
		// TODO Auto-generated constructor stub
	}

	public Saving_Account(int account_no, String holder_name, double balance) {
		super(account_no, holder_name, balance);
		// TODO Auto-generated constructor stub
	}

	public static float getInterest_rate() {
		return Interest_rate;
	}

	public static void setInterest_rate(float interest_rate) {
		Interest_rate = interest_rate;
	}

	@Override
	public void withdrow(double ammount) {
	     if(this.getBalance()>ammount) {
	    double FinalBalance =this.getBalance()-ammount;
	    if(FinalBalance>=10000) {
	    	   this.setBalance(FinalBalance);
	    	   System.out.println("Ammount Successfully Withdrow ");
	    	   }
	    else {
	    	System.out.println("Insufficient balance.maintain a minimum balance of ₹10,000.");
	    }
	    	 
	     }
	     else {
	    	 System.out.println("Insufficient balance.");
	     }
		
	}

	@Override
	public double calculateInterest() {
        double interest = (getBalance()*Interest_rate) / 100;
        setBalance(getBalance() + interest);
        this.Balance += interest;
        System.out.println("Interest Added: " + interest);
        return interest;
	}

}
