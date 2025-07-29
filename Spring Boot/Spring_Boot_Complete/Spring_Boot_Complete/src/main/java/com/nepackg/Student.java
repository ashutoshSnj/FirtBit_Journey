package com.nepackg;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class Student {
	
	@GetMapping("/student")
      public String getperson() {
    	  return "person is okk";
      }
}
