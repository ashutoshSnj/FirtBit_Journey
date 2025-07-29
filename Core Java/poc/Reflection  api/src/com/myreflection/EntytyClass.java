package com.myreflection;

public class EntytyClass {
  int id;
  private String name;
  
public EntytyClass(int id, String name) {
	this.id = id;
	this.name = name;
}
public EntytyClass() {
	
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

public void  setName(String name) {
	this.name = name;
}
@Override
public String toString() {
	// TODO Auto-generated method stub
	return "name = "+this.name+"  id= "+this.id;
}

  
}
