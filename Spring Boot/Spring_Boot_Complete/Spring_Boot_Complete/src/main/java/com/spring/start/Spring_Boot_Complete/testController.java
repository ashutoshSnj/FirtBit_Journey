package com.spring.start.Spring_Boot_Complete;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;


@RestController
public class testController {
	@GetMapping("/hello")
   public String displaymsg() {
	   return "hello byy ";
   }
	@GetMapping("/person")
	public Person getPerson() {
		return new Person("Ashutosh",42);
	}
		
}
