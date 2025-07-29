package com.httpmethod.HttpMethedGet_Post_Bo;



public class Student {
	 int Rolno;
   String name;
  
public Student(String name, int roleno) {
	System.out.println("parameterixed called ");
	this.name = name;
	Rolno = roleno;
}
  
public Student() {
	System.out.println("Defoult counstructer are called");
	
}

public String getName() {
	return name;
}

public void setName(String name) {
	this.name = name;
}

public int getRoleno() {
	return Rolno;
}

public void setRoleno(int roleno) {
	Rolno = roleno;
}


}
