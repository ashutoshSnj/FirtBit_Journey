package com.Programming_By_Contract;



public class alldatabases {
       public static connectivity anydb(String obj) {
    	   if(obj.equalsIgnoreCase("mysql")) {
    		   return new mysql();
    	   }
    	   else if(obj.equalsIgnoreCase("oracal")) {
    		   return new oracal();
    	   }
    	   else {
    		   System.out.println("unknoen db"+obj);
    		   return null;
    	   }
       }
}
