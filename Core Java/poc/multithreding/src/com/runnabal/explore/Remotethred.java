package com.runnabal.explore;

public class Remotethred implements Runnable {

	
	public void run(){
		System.out.println(Thread.currentThread().getName());
		procces3();
		procces4();
	}

	public void procces3() {
  	  System.out.println("p3 call");
    }
    public void procces4() {
  	  System.out.println("p4 call");
    }
	

}
