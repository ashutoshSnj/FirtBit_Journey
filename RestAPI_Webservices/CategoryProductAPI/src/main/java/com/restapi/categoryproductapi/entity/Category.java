package com.restapi.categoryproductapi.entity;

import java.util.List;

import com.fasterxml.jackson.annotation.JsonIgnore;

import jakarta.persistence.CascadeType;
import jakarta.persistence.Column;
import jakarta.persistence.Entity;

import jakarta.persistence.GeneratedValue;
import jakarta.persistence.GenerationType;
import jakarta.persistence.Id;
import jakarta.persistence.OneToMany;
import jakarta.persistence.Table;

@Entity
@Table(name="Category")
public class Category {
	@Id
	@GeneratedValue(strategy = GenerationType.IDENTITY)
    private int id;
	
	@Column(name="Category_Name")
	private String name;
	
	 @JsonIgnore
	@OneToMany(mappedBy = "category" , cascade=CascadeType.ALL)
	private List<Product> products ;
	
	@Column(name = "description")
    private String description;
	
	public Category() {
		
	}

	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public List<Product> getProducts() {
		return products;
	}

	public void setProducts(List<Product> products) {
		this.products = products;
	}

	public String getDescription() {
		return description;
	}

	public void setDescription(String description) {
		this.description = description;
	}

	public Category(int id, String name, List<Product> products, String description) {
		super();
		this.id = id;
		this.name = name;
		this.products = products;
		this.description = description;
	}
  

}
