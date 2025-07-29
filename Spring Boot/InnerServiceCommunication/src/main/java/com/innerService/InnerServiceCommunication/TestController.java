package com.innerService.InnerServiceCommunication;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RestController;
import org.springframework.web.client.RestTemplate;




@RestController
public class TestController {
     
	@GetMapping("/Simpal")
	public String getFun() {
		return "Thik Hai";
	}

	@GetMapping("/Student/SimpalService")
	public String get_Uper_string() {
		RestTemplate templete=new RestTemplate();
		String str=templete.getForEntity("http://localhost:8080/Student/innerservice", String.class).getBody();
	 return str.toUpperCase();
	}

	/*@GetMapping("/Student/Count")
	public   ArrayList<Student> getStudent() {
		RestTemplate templete=new RestTemplate();
	  ArrayList<Student> ref=templete.getForEntity("http://localhost:8080/Student", ArrayList.class).getBody();
	    System.out.println(ref.get(1).name); 
		return ref;
		
	}*/
	@GetMapping("/Student/Count")
	public List<Student> getStudent() {
	    RestTemplate template = new RestTemplate();
	    Student[] studentsArray = template.getForObject("http://localhost:8080/Student", Student[].class);
	   ArrayList<Student> obj= new ArrayList<>(Arrays.asList(studentsArray));
	  System.out.println(obj.get(1).name); 
	    return Arrays.asList(studentsArray); // Converts array to List directly
	}
	
 @GetMapping("/Student")
 public String StoreData(){
	  RestTemplate obj=new RestTemplate();
	 String str= obj.postForEntity("http://localhost:8080/Student", new Student(23,"Shelke"), String.class).getBody();
	 return str;
 }
	/*	@PostMapping("/Student")
   public String getStudent(Student obj) {
		System.out.println(ref);
	      ref.save(obj);
	   return "Student Add";
   }*/
}
