package com.restapi.categoryproductapi.controller;

import java.util.Optional;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.data.domain.Page;
import org.springframework.data.domain.Pageable;
import org.springframework.data.web.PagedModel;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.PutMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.restapi.categoryproductapi.entity.Category;
import com.restapi.categoryproductapi.service.CategoryService;

@RestController
@RequestMapping("/api/categories")
public class CategoryController {
	@Autowired
	CategoryService service;
	
	@GetMapping
	public ResponseEntity<Page<Category>> Get_all_Categories(Pageable ref){
		return ResponseEntity.ok(service.Get_All_Categorie(ref));
	}
	 @PostMapping
	    public ResponseEntity<String> Create_Category(@RequestBody Category category) {
	        service.Create_Category(category);
	        return ResponseEntity.ok("Category created successfully!");
	    }
	 @GetMapping("/{id}")
	    public ResponseEntity<Category> Get_Category(@PathVariable int id) {
	        return ResponseEntity.ok(service.Get_Category_by_Id(id));
	    }
	 
	 @PutMapping("/{id}")
	    public ResponseEntity<String> Update_Category(@PathVariable int id, @RequestBody String description) {
		 System.out.println(description);
	        String response = service.Update_Category(id, description);
	        return ResponseEntity.ok(response);
	    }
	 @DeleteMapping("/{id}")
	    public ResponseEntity<String> deleteCategory(@PathVariable int id) {
	        return ResponseEntity.ok(service.Delete_Category(id));
	    }
	 

}
