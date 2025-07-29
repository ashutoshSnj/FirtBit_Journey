package com.data_jpa_Star.Data_Jpa_DB_Connectio;

import com.fasterxml.jackson.annotation.JsonProperty;

import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.Id;
import jakarta.persistence.Table;

@Entity
@Table(name="student")
public class Student {
	
	@Id
	//@GeneratedValue(strategy = GenerationType.AUTO)
	@Column(name="rollno")
   int rollno;
	@Column(name="name")
   String name;
	
   public Student() {
	System.out.println("defoult counstructer call");
}

public int getRollno() {
	return rollno;
}

@JsonProperty("rollno")
public void setRollno(int rollno) {
	System.out.println("roll no setter call");

	this.rollno = rollno;
}
@JsonProperty("name")
public String getName() {
	return name;
}

public void setName(String name) {
	System.out.println("name setter call");

	this.name = name;
}

   
}
