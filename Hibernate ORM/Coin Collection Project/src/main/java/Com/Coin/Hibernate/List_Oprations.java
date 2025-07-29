package Com.Coin.Hibernate;

import java.util.Comparator;
import java.util.List;
import java.util.stream.Collectors;

import Com.Coin.Entity.Coin;

public class List_Oprations {
	

	public  List<Coin> Coin_List(List<Coin> obj,String Country) {
		//obj.stream().filter(ref->ref.getCountry().equalsIgnoreCase(Country)).forEach(ref->ref.toString());
		return obj.stream().filter(ref->ref.getCountry().equalsIgnoreCase(Country)).collect(Collectors.toList());
	}
	public List<Coin> Coin_List(List<Coin> obj,int Year) {
		return obj.stream().filter(ref->ref.getYear_of_minting()==Year).toList();
	}
	public List<Coin> Coin_List(List<Coin> obj) {
		     return obj.stream().sorted(Comparator.comparingDouble(ref->ref.getCurrent_value())).toList();
	}
	
	
	
	
	
	
	
}
