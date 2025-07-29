package throwe;

public class insufficientbalancenew extends Exception{
	public insufficientbalancenew(){	
	}
	
    public insufficientbalancenew(String msg) {
	  super(msg);
	}

     public void  msg( double balance,double ammount ){
             double amo=ammount-balance;
          System.out.println("insufficeint balance we want "+ amo+ " more");
}
     public void Email() {
    	 System.out.println("Email genrat code ");
     }
}
