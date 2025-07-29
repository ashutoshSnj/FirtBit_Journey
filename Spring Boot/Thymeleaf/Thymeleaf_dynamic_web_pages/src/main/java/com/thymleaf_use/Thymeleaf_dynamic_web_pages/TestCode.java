package com.thymleaf_use.Thymeleaf_dynamic_web_pages;

import java.lang.reflect.Type;
import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.ResponseBody;
import org.springframework.web.bind.annotation.RestController;

@Controller
public class TestCode {
	@Autowired
	StudentRepositry ref;
	
	/*@PostMapping("/Student")
   public String getStudent(Student obj) {
		
		System.out.println(ref);
	      ref.save(obj);
	   return "Student Add";
   }*/
	@GetMapping("/Student")
	public String Get_all_Student(Model obj){
		  List<Student> data=ref.findAll();
		    obj.addAttribute("What",data);
		return  "responce.html";
	}
	
	@GetMapping("/Student/{id}")
	//@ResponseBody
	public Student Get_Student_by_Id(@PathVariable int id){
		System.out.println("we pass hear ");
		return  ref.findById(id).get();
	}
	/*
	// select * from Student where Stream=?
	@GetMapping("/Student/{Stream}/str")
	
	public List<Student> Get_Student_by_Id(@PathVariable String Stream){
		/*Type[] genericInterfaces = StudentRepositry.class.getGenericInterfaces();
        for (Type type : genericInterfaces) {
			System.out.println(type);
		}
		return  ref.findByStream(Stream);
	}
	
	// select * from Student where Stream=? and Grean not in=?;
	@GetMapping("/Student/{Stream}/{Gread}")
	public List<Student> CheckStream_Gread(@PathVariable String Stream,@PathVariable String Gread){
		return  ref.findByStreamAndGreadNot(Stream, Gread);
	}
	
	// select count(*) from Student where stream=?
	@GetMapping("/Student/{Stream}/stream")
	public int Count_by_Stream(@PathVariable String Stream){
		return  ref.countByStream(Stream);
	}
	// select count(*) from Student where gread=?
	@GetMapping("/Student/{Gread}/gread")
	public int Count_by_Gread(@PathVariable String Gread){
		return ref.countByGread(Gread);
	}
	@GetMapping("/Student/{id}/custom")
	public List<Object[]> findSingleColumnId(@PathVariable int id){
		return ref.findSingleColumnId(id);	
		}
	*/
}  
