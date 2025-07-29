package com.restapi.categoryproductapi.service;

import java.util.List;
import java.util.Optional;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.data.domain.Page;
import org.springframework.data.domain.Pageable;
import org.springframework.stereotype.Service;

import com.restapi.categoryproductapi.dto.ProductUpdate;
import com.restapi.categoryproductapi.entity.Category;
import com.restapi.categoryproductapi.entity.Product;
import com.restapi.categoryproductapi.repository.CategoryRepository;
import com.restapi.categoryproductapi.repository.ProductRepository;

@Service
public class ProductService {
    
	@Autowired
	ProductRepository product_repo;
	@Autowired
	CategoryRepository category_repo;
	
	public Page<Product> Get_All_Products(Pageable ref){
		return product_repo.findAll(ref);
	}
	public String Add_Product(Product ref) {
	    Optional<Category> opt=category_repo.findById(ref.getCategory().getId());
	    if(opt.isPresent()) {
	    	product_repo.save(ref);
	    	return "Product added successfully";
	    
	    }
	    else {
	    	 return "Category not found";
	    }
	}
	 public Product Get_Product_ById(int id) {
	        Optional<Product> productOpt = product_repo.findById(id);
	        return productOpt.orElse(null);
	    }
	 public String update_Product(int id, ProductUpdate obj) {
	        Optional<Product> productOpt = this.product_repo.findById(id);
	        if (productOpt.isPresent()) {
	            Product product = productOpt.get();
	            if(obj.getDescription()!=null) {
	              product.setDescription(obj.getDescription());
	            }
	            if(obj.getPrice()!=null) {
	            	product.setPrice(obj.getPrice());
	            }
	            product_repo.save(product);
	            return "Product price and description updated successfully";
	        }
	        return "Product not found";
	    }
	 public String Delete_Product(int id) {
		 this.product_repo.deleteById(id);
		 return  "Product deleted successfully";
	 }
	 
	 public List<Product> getproductss(String str){
		 return product_repo.findproduct( str);
	 }
		
	}
	
	

	
	
	
	
	
	
	
	
	

