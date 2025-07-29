package com.maven.frist;

import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.Id;
import jakarta.persistence.Table;

@Entity
//@Table(name="user")
public class newuser {

	@Id
	@Column(name="usernm")
	String username;
	@Column(name="password")
	String pass;
	public String getUsername() {
		return username;
	}
	public void setUsername(String username) {
		this.username = username;
	}
	public String getPass() {
		return pass;
	}
	public void setPass(String pass) {
		this.pass = pass;
	}
	
	public newuser(String username, String pass) {
		this.username = username;
		this.pass = pass;
	}
	
	public newuser() {
		// TODO Auto-generated constructor stub
	}

}
