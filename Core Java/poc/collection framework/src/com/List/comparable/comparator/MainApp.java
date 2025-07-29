package com.List.comparable.comparator;

import java.util.ArrayList;
import java.util.Collection;
import java.util.List;

public class MainApp {
    public static void main(String [] args) {
    	List <Account> myaccount=new ArrayList<Account>();
    	myaccount.add(new Account(1,"Ashutosh",45896));
    	myaccount.add(new Account(5," Shelke Ashutosh",896));
    	myaccount.add(new Account(3,"Shelke",458));
    }

	@Override
	public int hashCode() {
		// TODO Auto-generated method stub
		return super.hashCode();
	}

	@Override
	public boolean equals(Object obj) {
		// TODO Auto-generated method stub
		return super.equals(obj);
	}

	@Override
	protected Object clone() throws CloneNotSupportedException {
		// TODO Auto-generated method stub
		return super.clone();
	}

	@Override
	public String toString() {
		// TODO Auto-generated method stub
		return super.toString();
	}

	@Override
	protected void finalize() throws Throwable {
		// TODO Auto-generated method stub
		super.finalize();
	}
}
