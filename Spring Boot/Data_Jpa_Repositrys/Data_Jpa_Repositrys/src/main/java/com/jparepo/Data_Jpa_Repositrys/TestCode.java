package com.jparepo.Data_Jpa_Repositrys;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.PutMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.ResponseStatus;
import org.springframework.web.bind.annotation.RestController;
import org.springframework.web.service.annotation.DeleteExchange;

import jakarta.servlet.http.HttpServletRequest;

@RestController
public class TestCode {
	@Autowired
	StudentRepositry ref;
	
	
	@PostMapping("/Student")
   public String getStudent(@RequestBody Student obj) {
		 System.out.println(Thread.currentThread().getName() + "this is in service method");
		// System.out.println(ref);
	      ref.save(obj);
	     
	   
	   return "Student Add";
   }
	@GetMapping("/str")
	public CustomResponce<Student> getstr() {
		return new CustomResponce<Student>("evrythink okkk" ,new Student());
	}
	
	@GetMapping("Student/ass")
	public String getmsg() {
		return "Huston we have a problem";
	}
	@GetMapping("/Student1")
	public String Get_all_Student(Model obj){
	
		  List<Student> data=ref.findAll();
		    obj.addAttribute("What",data);
		return  "responce.html";
	}
	
	
	@GetMapping("/Student/{id}")
	@ResponseStatus(HttpStatus.CREATED)
	public Student Get_Student_by_Id(@PathVariable int id){
		return  ref.findById(id).get();
	}
	
	// select * from Student where Stream=?
	@GetMapping("/Student/{Stream}/str")
	
	public List<Student> Get_Student_by_Id(@PathVariable String Stream){
      /*Type[] genericInterfaces = StudentRepositry.class.getGenericInterfaces();
        for (Type type : genericInterfaces) {
			System.out.println(type);
		}*/
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
		return ref.giveonlyname(id);	
		}

	@GetMapping("/Student/{id}/Classdata")
	public List<Object[]> findname(@PathVariable int id){
		return ref.anyname(id);	} 
	
	@PutMapping("/Student/{gre}/{stream}")
 public String updatestrem(@PathVariable String gre,@PathVariable String stream) {
		
		 ref.updeteStream(gre, stream);
		 return "sucsefully updated";
		
	}
	@DeleteMapping("/Student/{ID}")
	 public int DeleteReco(@PathVariable int ID) {
			
			return ref.deletrecord(ID);
			
		}
	
}
