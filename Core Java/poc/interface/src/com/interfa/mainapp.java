package com.interfa;

public class mainapp {

	public static void main(String[] args) {
		printable [] ref=new printable[] { new Admin() ,  new Hr(), new Traneer()			
		};
         for(printable arr:ref) {
        	 arr.prientable();
         }
        
       
       

}
}
