package com.Ecom;

import java.util.ArrayList;
import java.util.List;
// bui logic layer
public class cardaddition {
	List<product> cart=new ArrayList();
        public String addtocart(product obj) {
        	cart.add(obj);
        	  System.out.println(cart.size());
        	System.out.println("we add them");
        	return "continue";
        }
        Interface_all obj=new mysqldb();
        public boolean store() {
                 System.out.println(cart.size());
        	 return obj.storedata(cart);
        }
        
}
