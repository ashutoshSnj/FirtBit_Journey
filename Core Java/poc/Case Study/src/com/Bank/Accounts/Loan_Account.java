package com.Bank.Accounts;

public class Loan_Account extends Account {
	double loanamount;
	static float Interest_rate=7.2f;
	
	public Loan_Account() {
		// TODO Auto-generated constructor stub
	}

	public Loan_Account(int account_no, String holder_name, double balance,double loanamount) {
		super(account_no, holder_name, balance);
	   this.loanamount=loanamount;
	}
	

	public double getLoanamount() {
		return loanamount;
	}

	public void setLoanamount(double loanamount) {
		this.loanamount = loanamount;
	}

	public static float getInterest_rate() {
		return Interest_rate;
	}

	public static void setInterest_rate(float interest_rate) {
		Interest_rate = interest_rate;
	}

	@Override
	public void withdrow(double ammount) {
		// TODO Auto-generated method stub

	}

	@Override
	public double calculateInterest() {
        double interest = (this.Balance*Interest_rate) / 100;
        setBalance(getBalance() + interest);
        this.Balance += interest;
        System.out.println("Interest Added: " + interest);
        return interest;

	}
    public void diposit(double amount) {
        if (amount <= this.loanamount) {
            this.loanamount -= amount;
            setBalance(getBalance() + amount);
            System.out.println("Loan repayment: " + amount);
        } else {
            System.out.println("Exceeds loan repayment amount!");
        }
    }

    

}
