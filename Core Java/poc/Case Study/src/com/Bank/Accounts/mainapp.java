package com.Bank.Accounts;

public class mainapp {

	public static void main(String[] args) {
        Bank bank = new Bank();
        try {
        	bank.menu();
        }
        catch (wrongno obj){
        	obj.printStackTrace();
        	obj.inputagain();  
        }    
	}

}