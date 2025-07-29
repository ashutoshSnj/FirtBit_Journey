package com.api;

public class mainapp {

	public static void main(String[] args) {
		arithmaticopration ref=new Addition();
	  System.out.println(ref.calculation(4, 6));
	  // anonymous inner class 
	  arithmaticopration subtract=new arithmaticopration() {
		  public int calculation(int op1, int op2) {
				return op1+op2;
			}
	  };
	  // lamda expretion         // parameter   
	  arithmaticopration multyplay=(a,b)->a*b;
	                                       // bodym 6 
	  System.out.println(multyplay.calculation(7,5));
	  
	  
	}

	

}
