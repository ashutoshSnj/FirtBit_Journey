package com.innerService.InnerServiceCommunication;

public class Student {

   int rollno;
	
   String name;
public int getRollno() {
	return rollno;
}
public void setRollno(int rollno) {
	this.rollno = rollno;
}
public String getName() {
	return name;
}
public void setName(String name) {
	this.name = name;
}
public Student(int rollno, String name) {
	super();
	this.rollno = rollno;
	this.name = name;
}
   public Student() {
	// TODO Auto-generated constructor stub
}
  
    
}
