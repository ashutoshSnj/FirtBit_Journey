package throwe;
public class Account {
	int id;
	String name;
   double  balance;


public int getId() {
	return id;
}

public void setId(int id) {
	this.id = id;
}

public String getName() {
	return name;
}

public void setName(String name) {
	this.name = name;
}

public double getBalance() {
	return balance;
}

public void setBalance(double balance) {
	this.balance = balance;
}

public Account(int id, String name, double balance) {
	super();
	this.id = id;
	this.name = name;
	this.balance = balance;
}
                                        // hear
public void withdrow(double ammount) throws insufficientbalancenew {
	if(this.balance<ammount) {
// rember in privious exampal hear we write try catch block and not write 
// throws insufficientbalancenew but now hear we not write try catch block and 
// write throws insufficientbalancenew
// consider supoose this account is for bank account okk so in catch block we call
	// msg method now suppose we use this same class for making a another object and this 
		// object for the inssurance are another account but that condition is not pass
		// the messege mean not call the msg function give the mail
		// then now we not resolve this problem in this class mean account class 
		// we sey suppose eception occurd then we pass the object for where it function call
		// for undestanding we sey in main we call the methos then we sey suppose you can do call this 
		/// withdro function then handal this eception we not handal it 
		// then we use throws 
		// thats why where we call this withdrow function this location we write to cade
		// for handal
		throw new insufficientbalancenew (" not sufficient amount ");	
		/*What Happens Next:

			If the withdrow method has a throws clause (like in your code),
			 it indicates that the method does not handle the exception. Instead:
			The exception is propagated to the caller of the withdrow method.
			The exception does not directly "go to the JVM" at this stage.
			 It is sent to the caller of the withdrow method (e.g., wherever the withdrow 
			 method was invoked).
			Caller Responsibility:
			The caller method has two options:
			Handle the exception with a try-catch block.
			Propagate the exception further by declaring throws in its signature*/
		
	}
	else {
		this.setBalance(this.getBalance()-ammount);
	}
	
}
        
   
}
