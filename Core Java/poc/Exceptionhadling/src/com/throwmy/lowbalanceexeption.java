
package com.throwmy;

public class lowbalanceexeption extends Exception {
	public lowbalanceexeption() {	
	}
	
public lowbalanceexeption(String msg) {
	  super(msg);
	}

     public void msg( double balance,double ammount  ){
    double amo=ammount-balance;
    System.out.println("ammount not sufficient we want more " + amo);
}
}
