package com.collection.practice;



public class Account implements Comparable <Account>  {
	int id;
	String name;
   double  balance;
public Account() {
	
}


public Account(int id, String name, double balance) {
	this.id = id;
	this.name = name;
	this.balance = balance;
}


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


@Override
public String toString() {
	return "Account{id=" + id + ", name='" + name + "', balance=" + balance + "}";
}



public int hashCode() {

	return this.id;
}



public boolean equals(Object obj) {

	Account ref=(Account) obj;
	if(ref.id==this.id) {
	  return true;
	}
	else {
		return false;
	}
}


    public int compareTo(Account o) {
   if(this.id>o.id){
	   //System.out.println(this.name +"+"+ o.name);
	   return 1;
   }
   else if (this.id<o.id){
	   
	   return -1;
 
   }
   else {
	   return 0;
   }
   
  /* public int compareTo(Account o) {
	   if(this.balance>o.balance){
		   return 1;
	   }
	   else if(this.balance<o.balance) {
		   return -1;
	   }
	   else if (this.balance==o.balance){
      int result =this.name.compareTo(o.name);
		  if(result>0){
			  return 1;
		  }
		  else if(result<0) {
			  return -1;
		  }
		  else if(result==0) {
			  if(this.id>o.id) {
				   return 1;
			   }
			   else if (this.id<o.id){
				   return -1;
			 
			   }
			   else {
				   
				   return 0;
			   }
		  }
	   }
	   
	return 0;
   
}*/






    }  
}
