package com.webclint.communication.WebClint_Api_Communication;

import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;
import org.springframework.stereotype.Component;

//@Configuration
@Component
public class getbean {
	//@Bean
  String str;
  
  public getbean() {
	this("Shelke");
}
  


public getbean(String str) {
	
	this.str = str;
}



public getbean getobj() {
	   return new getbean("Ashutosh");
   }
}
