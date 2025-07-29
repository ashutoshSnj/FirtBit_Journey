package com.syncronize;

public class countermain {

	public static void main(String[] args) {
		counter ref=new counter();
		
		Thread t1=new Thread(()->{
			for(int i=0;i<100;i++) {
				ref.increment();
			}
		});
		
		Thread t2=new Thread(()->{
			for(int i=0;i<100;i++) {
				ref.increment();
			}
		});
			
		t1.start();
		t2.start();
		try {
			t1.join();
			t2.join();
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		System.out.println(ref.getCount());
		
	}

}
