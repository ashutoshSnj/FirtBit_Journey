package com.user.info;

import jakarta.persistence.Column;
import jakarta.persistence.Embeddable;

@Embeddable
public class Address {
	@Column (name="line1")
  String line1;
	@Column (name="line2")
  String line2;
	public Address(String line1, String line2) {
	
		this.line1 = line1;
		this.line2 = line2;
	}
	public Address() {
		// TODO Auto-generated constructor stub
	}
	public String getLine1() {
		return line1;
	}
	public void setLine1(String line1) {
		this.line1 = line1;
	}
	public String getLine2() {
		return line2;
	}
	public void setLine2(String line2) {
		this.line2 = line2;
	}
	
  
}
