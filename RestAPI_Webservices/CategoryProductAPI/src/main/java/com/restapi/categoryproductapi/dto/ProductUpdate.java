package com.restapi.categoryproductapi.dto;

public class ProductUpdate {
	private Double price;
    private String description;
    
    
    public ProductUpdate() {
		// TODO Auto-generated constructor stub
	}
	public Double getPrice() {
		return price;
	}
	public void setPrice(Double price) {
		this.price = price;
	}
	public String getDescription() {
		return description;
	}
	public void setDescription(String description) {
		this.description = description;
	}
	public ProductUpdate(Double price, String description) {
		super();
		this.price = price;
		this.description = description;
	}

}
