package com.card;

// data persistance leyer componant
public class Fileconnectivity implements connectionint{
	public boolean checkinfile(Card ref) {
		return true;
	}

	@Override
	public boolean isvalid(Card ref) {
	    
		return checkinfile(ref);
	}
	

}
