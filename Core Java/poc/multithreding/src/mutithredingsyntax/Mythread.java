package mutithredingsyntax;

public class Mythread extends Thread {
	public static void main(String [] args) {
		Thread t1=new Mythread();
		Thread t2=new Mythread();
		t1.setName("first");
		t2.setName("second");
		t1.start();
		t2.start();
	}
		
	public void run() {
		if(Thread.currentThread().getName().equals("first")) {
			procces1();
			procces2();	
		}
		else {
			procces3();
			procces4();
		}
		
	}
      public void procces1() {
    	  System.out.println("p1 call");
      }
      public void procces2() {
    	  System.out.println("p2 call");
      }
      public void procces3() {
    	  System.out.println("p3 call");
      }
      public void procces4() {
    	  System.out.println("p4 call");
      }
	
}

