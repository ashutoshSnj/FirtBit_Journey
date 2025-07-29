package com.user.info;

import jakarta.persistence.Column;
import jakarta.persistence.Embedded;
import jakarta.persistence.Entity;
import jakarta.persistence.Id;
import jakarta.persistence.Table;

@Entity
@Table (name="UserData")
public class User {
	@Id
	@Column(name="username")
	String username;
	@Column (name="password")
	String password;
	@Embedded
	Address addres;
	
	public Address getAddres() {
		return addres;
	}
	public void setAddres(Address addres) {
		this.addres = addres;
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
	public String getPassword() {
		return password;
	}
	public void setPassword(String password) {
		this.password = password;
	}
	public User(String username, String password, Address addres) {
		
		this.username = username;
		this.password = password;
		this.addres = addres;
	}
	
}
