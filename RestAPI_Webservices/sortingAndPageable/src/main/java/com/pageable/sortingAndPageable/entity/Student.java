package com.pageable.sortingAndPageable.entity;



import org.hibernate.annotations.IdGeneratorType;

import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.GeneratedValue;
import jakarta.persistence.GenerationType;
import jakarta.persistence.Id;
import jakarta.persistence.Table;

@Entity
@Table(name="Student")
public class Student {
	@Id
   @GeneratedValue(strategy = GenerationType.IDENTITY )
	@Column(name="RollNo")
   int rollNo;
   String Name;
   String Branch;
   public Student() {
	
}
public Student( String name, String branch) {

	Name = name;
	Branch = branch;
}

public int getRollNo() {
	return rollNo;
}
public void setRollNo(int rollNo) {
	this.rollNo = rollNo;
}
public void setrollNo(int rollNo) {
	this.rollNo = rollNo;
}
public String getName() {
	return Name;
}
public void setName(String name) {
	Name = name;
}
public String getBranch() {
	return Branch;
}
public void setBranch(String branch) {
	Branch = branch;
}
   
}
