package com.and_or_Oprations;



import jakarta.persistence.Entity;
import jakarta.persistence.Id;
import jakarta.persistence.Table;
@Entity
@Table (name="Students")
public class Students {
	@Id
   int rollno;
   String name;
   double  Hsc_Percentage;
   double SSc_Percentage;
   double Degree_Percentage;
   String Address;
   String Branch;
   
   
   
   public Students() {
	// TODO Auto-generated constructor stub
}



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



public double getHsc_Percentage() {
	return Hsc_Percentage;
}



public void setHsc_Percentage(float hsc_Percentage) {
	Hsc_Percentage = hsc_Percentage;
}



public double getSSc_Percentage() {
	return SSc_Percentage;
}



public void setSSc_Percentage(double sSc_Percentage) {
	SSc_Percentage = sSc_Percentage;
}



public double getDegree_Percentage() {
	return Degree_Percentage;
}



public void setDegree_Percentage(double degree_Percentage) {
	Degree_Percentage = degree_Percentage;
}



public String getAddress() {
	return Address;
}



public void setAddress(String address) {
	Address = address;
}



public String getBranch() {
	return Branch;
}



public void setBranch(String branch) {
	Branch = branch;
}



public Students(int rollno, String name, double d, double e, double f,
		String address, String branch) {
	
	this.rollno = rollno;
	this.name = name;
	Hsc_Percentage = d;
	SSc_Percentage = e;
	Degree_Percentage = f;
	Address = address;
	Branch = branch;
}
@Override
public String toString() {
    return "Students {" +
           "Roll No=" + rollno +
           ", Name='" + name + '\'' +
           ", HSC Percentage=" + Hsc_Percentage +
           ", SSC Percentage=" + SSc_Percentage +
           ", Degree Percentage=" + Degree_Percentage +
           ", Address='" + Address + '\'' +
           ", Branch='" + Branch + '\'' +
           '}';
}

public Students(int rollno,String name) {
	this.rollno=rollno;
	this.name=name;
}
   
}
