package com.criteria.start;

import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.Id;
import jakarta.persistence.Table;

@Entity
@Table(name="users")
public class User {
	@Id
	@Column(name="username")
	String username;
	@Column(name="password")
	int password;
	@Column(name="mobileno")
	String mobilno;
	public User(String username, int password, String mobilno) {
		super();
		this.username = username;
		this.password = password;
		this.mobilno = mobilno;
	}
	
    public User() {
		// TODO Auto-generated constructor stub
	}

	public String getUsername() {
		return username;
	}

	public void setUsername(String username) {
		this.username = username;
	}

	public int getPassword() {
		return password;
	}

	public void setPassword(int password) {
		this.password = password;
	}

	public String getMobilno() {
		return mobilno;
	}

	public void setMobilno(String mobilno) {
		this.mobilno = mobilno;
	}
	public User(String str,int ptr) {
		this.username=str;
		this.password=ptr;
	}
    
}
