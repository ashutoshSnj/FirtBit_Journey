
package com.pageable.sortingAndPageable.service;


import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.data.domain.Page;
import org.springframework.data.domain.PageRequest;
import org.springframework.data.domain.Sort;
import org.springframework.stereotype.Service;
import org.springframework.data.domain.Pageable;

import com.pageable.sortingAndPageable.entity.Student;
import com.pageable.sortingAndPageable.repositry.StudentRepositry;
@Service
public class StudentService {
   @Autowired
	StudentRepositry repo;
   
   public Page<Student> getAllStudent(int page,int size,String sortby,String direction)
   {
	  Sort sort=direction.equalsIgnoreCase("desc")? Sort.by(sortby).descending():Sort.by(sortby).ascending();
	    Pageable pageable=PageRequest.of(page, size,sort);
	    return repo.findAll(pageable);
			   }
}
