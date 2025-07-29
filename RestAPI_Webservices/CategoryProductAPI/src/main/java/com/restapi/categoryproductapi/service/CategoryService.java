package com.restapi.categoryproductapi.service;


import java.util.Optional;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.data.domain.Page;
import org.springframework.data.domain.Pageable;
import org.springframework.stereotype.Service;

import com.restapi.categoryproductapi.entity.Category;
import com.restapi.categoryproductapi.repository.CategoryRepository;

@Service
public class CategoryService {
    @Autowired
	CategoryRepository repo;
    
    public Page<Category> Get_All_Categorie(Pageable ref){
    	
    	return repo.findAll(ref);	
    	
    }
    
    public Category Get_Category_by_Id(int id){
    	return repo.findById(id).get();
    }
    
    public void Create_Category(Category ref) {
    	repo.save(ref);
    }
    
    public String Update_Category(int id, String desc) {
    	Optional<Category> opt=repo.findById(id);
    	if(opt.isPresent()) {
    		 Category category = opt.get();
    		 
    		category.setDescription(desc);
    		repo.save(category);
    		 return "Category description updated successfully";
    	}
    	else {
    		 return "Category not found";
    	}
    }
    
    public String Delete_Category(int id) {
    	repo.deleteById(id);
    	return "Category deleted successfully";
    }
    
    
    
    
    
}
