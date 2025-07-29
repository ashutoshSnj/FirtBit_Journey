package com.restapi.categoryproductapi.entity;

import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.GeneratedValue;
import jakarta.persistence.GenerationType;
import jakarta.persistence.Id;

import jakarta.persistence.ManyToOne;
import jakarta.persistence.Table;

@Entity
@Table(name="Products")
public class Product {
  
	@Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
	@Column(name="product_id")
   int id;
	
	@ManyToOne(targetEntity = Category.class)
   Category  category;
	
    @Column(name="product_name")
   String name;
    
    @Column(name="Product_price")
   double price;
    
    @Column(name="description")
   String description;

    public Product() {
		// TODO Auto-generated constructor stub
	}

	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public Category getCategory() {
		return category;
	}

	public void setCategory(Category category) {
		this.category = category;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public double getPrice() {
		return price;
	}

	public void setPrice(double price) {
		this.price = price;
	}

	public String getDescription() {
		return description;
	}

	public void setDescription(String description) {
		this.description = description;
	}

	public Product(int id, Category category, String name, double price, String description) {
		super();
		this.id = id;
		this.category = category;
		this.name = name;
		this.price = price;
		this.description = description;
	}
    
}
