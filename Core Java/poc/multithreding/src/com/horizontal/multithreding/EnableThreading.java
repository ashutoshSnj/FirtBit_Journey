package com.horizontal.multithreding;

public class EnableThreading  implements Runnable{
	Account ref;
	
	public EnableThreading(Account obj) {
	         ref=obj;
	}
	
	public Account getRef() {
		return ref;
	}

	public void setRef(Account ref) {
		this.ref = ref;
	}

	public void run() {
	System.out.println("runn call for "+Thread.currentThread().getName());
			ref.withdraw();
			System.out.println("balance is "+ ref.balance+"from thread"+Thread.currentThread().getName());	
	}

}
