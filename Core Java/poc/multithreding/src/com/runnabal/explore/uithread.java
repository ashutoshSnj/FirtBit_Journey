package com.runnabal.explore;

public class uithread implements Runnable {
	
	public void run() {
		//System.out.println(Thread.currentThread().getName());
		procces1();
		procces2();	
	}
	public void procces1() {
  	  System.out.println("p1 call");
    }
    public void procces2() {
  	  System.out.println("p2 call");
    }
}
