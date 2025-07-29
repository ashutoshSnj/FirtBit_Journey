package Com.Coin.Hibernate;


import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;

import Com.Coin.Entity.Coin;

public class Search_Opration {
	public ArrayList<Coin> Search(ArrayList<Coin> obj,String country,String denomination){
		return new ArrayList<Coin>(obj.stream().filter(ref->ref.getCountry().
				  equalsIgnoreCase(country)&&ref.getDenomination().equalsIgnoreCase(denomination)).toList());		
	}
	
	public ArrayList<Coin> Search(ArrayList<Coin> obj,String country,int year){
		return new ArrayList<Coin>(obj.stream().filter(ref->ref.getCountry().
				  equalsIgnoreCase(country)&&ref.getYear_of_minting()==year).toList());		
	}
	
	public ArrayList<Coin> Search(ArrayList<Coin> obj,String country,String denomination,int  year){
		return new ArrayList<Coin>(obj.stream().filter(ref->ref.getCountry().
				  equalsIgnoreCase(country)&&ref.getDenomination().equalsIgnoreCase(denomination)&&ref.getYear_of_minting()==year).toList());	
	}
	
	
	public ArrayList<Coin> Search(String Date,String Country,ArrayList<Coin> obj){
		return obj.stream().filter(ref->ref.getAcquired_date().
				  equalsIgnoreCase(Date)&&ref.getCountry().equalsIgnoreCase(Country)).collect(Collectors.toCollection(ArrayList::new));		
	}
}

