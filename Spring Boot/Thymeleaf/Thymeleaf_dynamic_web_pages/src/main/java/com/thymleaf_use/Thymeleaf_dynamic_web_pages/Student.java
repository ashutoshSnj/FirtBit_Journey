package com.thymleaf_use.Thymeleaf_dynamic_web_pages;

import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.Id;
import jakarta.persistence.Table;

@Entity
@Table(name="ALL_Students")
public class Student {
	
	@Id
	@Column(name="rollno")
	int id;
	String name;
	String gread;
	String stream;
	
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
	public String getGread() {
		return gread;
	}
	public void setGread(String gread) {
		this.gread = gread;
	}
	public String getStream() {
		return stream;
	}
	public void setStream(String stream) {
		this.stream = stream;
	}
	public Student() {
		
	}
}
