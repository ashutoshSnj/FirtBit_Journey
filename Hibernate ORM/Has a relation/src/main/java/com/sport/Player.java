package com.sport;

import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.Id;
import jakarta.persistence.ManyToOne;
import jakarta.persistence.Table;

@Entity
@Table(name="player")
public class Player {
	@Column(name="Player_name")
	String name;
	@Id
	@Column(name="Jersey_no")
	String Js_No;
	
	@ManyToOne(targetEntity = Team.class)
	 Team team;
	 
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getJs_No() {
		return Js_No;
	}
	public void setJs_No(String js_No) {
		Js_No = js_No;
	}
	

	public Player(String name, String js_No, Team team) {
		super();
		this.name = name;
		Js_No = js_No;
		this.team = team;
	}
	public Player() {
		// TODO Auto-generated constructor stub
	}

}
