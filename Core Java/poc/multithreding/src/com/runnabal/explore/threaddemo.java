package com.runnabal.explore;



public class threaddemo  {

	public static void main(String[] args){
		//System.out.println(Thread.currentThread().getName());
		
		Thread s1=new Thread(new uithread());
		Thread s2=new Thread(new Remotethred());
		s1.setName("UI Thread");
		s2.setName("Remote Thread");
		
		s1.start();
		s2.start();
		
		try {
			s1.join();
			s2.join();
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		
		procces5();
	}
	   static void procces5() {
		System.out.println("procces 5 call");
	}
	

	
}
