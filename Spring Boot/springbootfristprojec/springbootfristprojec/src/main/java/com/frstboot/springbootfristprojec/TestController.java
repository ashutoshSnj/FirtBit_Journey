package com.frstboot.springbootfristprojec;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class TestController {
	@GetMapping("/hello")
   public String displaymsg() {
	   return "hello ";
   }
	
	@GetMapping("/person")
	public Person getperson() {
		return new Person("Ashutosh","Pune");
	}
	
}
