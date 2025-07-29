package com.data_jpa_Star.Data_Jpa_DB_Connectio;


import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpEntity;
import org.springframework.http.HttpHeaders;
import org.springframework.http.MediaType;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;
import org.springframework.web.client.RestTemplate;


@RestController
public class TestController {
	@Autowired
	StudentRepository ref;
	/*@PostMapping("/Student")
	public String receiveStudent(@RequestBody Student student) {
	    System.out.println("Received Student: Roll No = " + student.getRollno() + ", Name = " + student.getName());
	    return "Data received";
	}*/

	@PostMapping("/Student")
   public String getStudent(Student obj) {
		System.out.println(obj.getName() + " - " + obj.getRollno());
		System.out.println(ref);
	      ref.save(obj);
	   return "Student Add";
   }
	@GetMapping("/Student")
	public List<Student> Get_all_Student(){
		return  ref.findAll();
	}
	@GetMapping("/Student/{id}")
	public Student Get_Student_by_Id(@PathVariable int id){
		return  ref.findById(id).get();
	}
	
	@GetMapping("/Student/{Student_name}/name")
	public List<Student> get_by_name(@PathVariable String Student_name  ){
		return ref.findByName(Student_name);
	}
	@GetMapping("/Student/{Student_name}/{rollno}")
	public List<Student> get_by_name_and_id(@PathVariable String Student_name, @PathVariable int rollno){
		return ref.findByNameAndRollno(Student_name, rollno);
	}
	
// this is for inner service communication
	
	@GetMapping("Student/innerservice")
	public String get_Uper_string() {
	   return "thik hai bhai";
	}
	
	
	@GetMapping("/Student/get")
	public String storeData() {
	    RestTemplate restTemplate = new RestTemplate();

	    Student std = new Student();
	    std.setRollno(85);
	    std.setName("Ashu");

	    HttpHeaders headers = new HttpHeaders();
	    headers.setContentType(MediaType.APPLICATION_JSON); // 🔹 Ensures JSON format

	    HttpEntity<Student> request = new HttpEntity<>(std, headers);

	    String response = restTemplate.postForObject("http://localhost:8080/Student", request, String.class);

	    return response;
	}

}
