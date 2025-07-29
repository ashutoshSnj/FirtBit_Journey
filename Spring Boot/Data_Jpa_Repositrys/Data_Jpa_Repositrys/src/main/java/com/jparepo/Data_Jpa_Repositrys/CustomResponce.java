package com.jparepo.Data_Jpa_Repositrys;

import org.springframework.stereotype.Component;


public class CustomResponce<T> {
  String status;
  T data;
  public CustomResponce() {
	// TODO Auto-generated constructor stub
}
public String getStatus() {
	return status;
}
public void setStatus(String status) {
	this.status = status;
}
public T getData() {
	return data;
}
public void setData(T data) {
	this.data = data;
}
public CustomResponce(String status, T data) {
	super();
	this.status = status;
	this.data = data;
}
  
}
