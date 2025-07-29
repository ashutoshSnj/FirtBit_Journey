package com.httpmethod.HttpMethedGet_Post_Bo;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;


@RestController
//@RequestMapping("/dashboard")
public class TestController {
	@GetMapping("/Student")
   public String CreatStudent() {
	   return "Student Add";
   }
	@PostMapping("/student")
	   public String CreatStudent(Student obj) {
			System.out.println(obj.getName() +"  "+ obj.getRoleno());
		   return "Student Add";
	   }
}
