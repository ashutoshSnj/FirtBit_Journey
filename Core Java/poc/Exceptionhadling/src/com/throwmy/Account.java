package com.throwmy;

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

public void withdrow(double ammount)  {
	// suppose this condition occured then jvm are the subtract the value without any error
	// but thats not perfect then how we stop the jvm so we creat a user define exception
	// we creat a class lowbalanceexeption which is extends the exception class 
	
	if(this.balance<ammount) {
		try {
		
			throw new lowbalanceexeption(" ammount not sufficient ");
			// hear we make lowbalanceexeption class object and pass the one string parameter 
			// lowbalanceexeption class constructer creat the object then this
			// throw key waord throe the object to jvm 
			// jvm see the exception occure then he again throw the exception object
			// and stop this try block and this object  catch in cathc block
			// then we handle the exception in catch block
			
		}
		catch (lowbalanceexeption e) {
			
	        //e.msg(this.getBalance(), ammount);
			//e.printStackTrace();
			e.msg(this.balance, ammount);
			// hear we simply recive the lowbalanceexeption class object 
			// this msg method write in lowbalanceexeption  class
			// becose suppose any other class this  condition insufficient 
			// balance occured then in another class
			// this exception differnt differnt developer handal on its wey
			// this is not standrsdization so simpally write this method in 
  // exception class then any othr class soppose occured this incufficiant balance problem then he 
			// throe the lowbalanceexeption class object and the perform this msg method
	         
		}
		                                                                                                                                                                                                                                                                                                                                                                
	}
	else {
		this.setBalance(this.getBalance()-ammount);
	}
	
}
   

}
