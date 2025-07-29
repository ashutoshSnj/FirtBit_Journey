package com.pageable.sortingAndPageable.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.data.domain.Page;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

import com.pageable.sortingAndPageable.entity.Student;
import com.pageable.sortingAndPageable.service.StudentService;

@RestController
@RequestMapping("/Students")
public class StudentController {
   @Autowired
	StudentService service;
   @GetMapping
   public Page<Student> getallStudent(@RequestParam(defaultValue = "0") int page,
           @RequestParam(defaultValue = "5") int size,
           @RequestParam(defaultValue = "rollNo") String sortBy,
           @RequestParam(defaultValue = "asc") String direction
   ){
	   return service.getAllStudent(page, size, sortBy, direction);
   }
   @GetMapping("/Card")
   public String getcard() {
	   return "card is present";
   }
}
