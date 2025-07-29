package com.restapi.categoryproductapi.controller;

import java.util.List;
import java.util.Optional;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.data.domain.Page;
import org.springframework.data.domain.Pageable;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.PutMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

import com.restapi.categoryproductapi.dto.ProductUpdate;
import com.restapi.categoryproductapi.entity.Product;
import com.restapi.categoryproductapi.service.ProductService;

@RestController
@RequestMapping("/api/products")
public class ProductController {

    @Autowired
	ProductService service;
    
    @GetMapping
    public ResponseEntity<Page<Product>> Get_all_Products(Pageable ref){
    	return ResponseEntity.ok(service.Get_All_Products(ref)) ;
    }
    
    @PostMapping
    public ResponseEntity<String> addProduct(@RequestBody Product product) {
        return ResponseEntity.ok(service.Add_Product(product));
    }
    
    @GetMapping("/{id}")
    public ResponseEntity<Product> getProductById(@PathVariable int id) {
        return ResponseEntity.ok(service.Get_Product_ById(id));
    }
    
    @PutMapping("/{id}")
    public ResponseEntity<String> updateProduct(@PathVariable int id, @RequestBody ProductUpdate ref) {
        return ResponseEntity.ok(service.update_Product(id, ref));
    }
    
    @DeleteMapping("/{id}")
    public ResponseEntity<String> deleteProduct(@PathVariable int id) {
        return ResponseEntity.ok(service.Delete_Product(id));
    }
    @GetMapping("/product")
    public ResponseEntity<List<Product>> findproduct(@RequestParam String Category){
    	System.out.println("we call ");
    	return ResponseEntity.ok(service.getproductss(Category));
    }
}
