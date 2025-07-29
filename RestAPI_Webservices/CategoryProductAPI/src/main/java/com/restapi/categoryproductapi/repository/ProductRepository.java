package com.restapi.categoryproductapi.repository;


import java.util.List;

import org.springframework.data.domain.Page;
import org.springframework.data.domain.Pageable;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;
import org.springframework.web.bind.annotation.RequestParam;

import com.restapi.categoryproductapi.entity.Product;

public interface ProductRepository extends JpaRepository<Product,Integer> {
	 
    Page <Product> findAll(Pageable pageable);
    @Query(value = "select * from products where category_id in (select id from category where  category_name=:category)",nativeQuery = true )
    public List<Product> findproduct(@RequestParam String category);
   
}
