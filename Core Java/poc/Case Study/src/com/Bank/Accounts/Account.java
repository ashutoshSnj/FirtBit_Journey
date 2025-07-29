package com.Bank.Accounts;

public abstract class Account {
        int Account_no;
        String Holder_name;
        double Balance;
        
         
       public Account() {
	}
        
	public Account(int account_no, String holder_name, double balance) {

		Account_no = account_no;
		Holder_name = holder_name;
		Balance = balance;
	}
	
	public int getAccount_no() {
		return Account_no;
	}
	public void setAccount_no(int account_no) {
		Account_no = account_no;
	}
	public String getHolder_name() {
		return Holder_name;
	}
	public void setHolder_name(String holder_name) {
		Holder_name = holder_name;
	}
	public double getBalance() {
		return Balance;
	}
	public void setBalance(double balance) {
		Balance = balance;
	}
	
     public void display_details() {
    	 System.out.println("Account no  = " +this.Account_no);
    	 System.out.println("Holder name = "+this.Holder_name);
    	 System.out.println("Balance is  = "+this.Balance);
     }
       public void diposit(double ammount) {
    	   this.Balance+=ammount;
    	   System.out.println("Ammount successfully Diposit ");
       }
       public void Display_balance() {
    	   System.out.println("Balance = "+this.Balance);
       }
       public abstract void withdrow(double ammount);
       public abstract double calculateInterest();
             
}



























