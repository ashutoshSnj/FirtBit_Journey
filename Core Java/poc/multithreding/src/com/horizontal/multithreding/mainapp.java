package com.horizontal.multithreding;

public class mainapp {

	public static void main(String[] args) {
	  Account myacc=new Account(1,"Ashutosh",20000);
	  EnableThreading s1= new  EnableThreading(myacc);
	  EnableThreading s2=new  EnableThreading(myacc);
	  Thread t1=new Thread(s1);
	  Thread t2=new Thread(s2);
	      t1.setName("Thread 1");
	      t2.setName("Thread 2");
	      t1.start();
	      t2.start();
	      try {
			t1.join();
			  t2.join();
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
   System.out.println("final output = "+myacc.balance);
	}

}
