package com.crud.opration;

import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.GeneratedValue;
import jakarta.persistence.GenerationType;
import jakarta.persistence.Id;
import jakarta.persistence.Table;

@Entity
@Table (name="Students")
public class Student {
	@Id
	@GeneratedValue(strategy = GenerationType.IDENTITY)
	@Column (name="role_no")
	int id;
	@Column(name="name")
	String name;
	@Column(name="Addres")
	String Address;
	
	public Student() {
		
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

	public String getAddress() {
		return Address;
	}

	public void setAddress(String address) {
		Address = address;
	}

	public Student(int id, String name, String address) {
		
		this.id = id;
		this.name = name;
		Address = address;
	}

	@Override
	public String toString() {
	return  "Student { id="+this.id+" name ="+this.name+" Addres ="+this.Address+"}";
	}
	
	
	

}
