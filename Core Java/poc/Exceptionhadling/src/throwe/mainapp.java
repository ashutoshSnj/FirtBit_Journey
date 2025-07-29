package throwe;

public class mainapp {

	public static void main(String[] args) {
	    Account ref=new Account(12,"Ashutosh",8952);
	    double ammount;
	  /*  try {
			ref.withdrow(89562);
		} catch (insufficientbalancenew e) {
			e.printStackTrace();
			e.msg(ref.getBalance(),89562);
		}*/
	    Account ref1 =new Account(8,"Shelke",465);
	     try {
			ref1.withdrow(8549);
		} catch (insufficientbalancenew e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
			e.Email();
		}
	    
	    
	    
	}

}
