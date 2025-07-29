package com.card;
// business logic leyer componant
public class creditver {
	public creditver() {
		// TODO Auto-generated constructor stub
	}

	public boolean verify(Card ref) {
		connectionint dbconect=new databasesconection();
		System.out.println(dbconect.isvalid(ref));
		return dbconect.isvalid(ref);
		
		//Fileconnectivity fileref=new Fileconnectivity();
		//return fileref.isvalid(ref);
	}
	
}
