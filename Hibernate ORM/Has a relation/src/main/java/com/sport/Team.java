package com.sport;

import java.util.Set;

import jakarta.persistence.CascadeType;
import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.Id;
import jakarta.persistence.OneToMany;
import jakarta.persistence.Table;

@Entity
@Table(name="Team")
public class Team {
	   @Id
	  @Column (name="name")
	  String name;
	  @Column (name="country")
	  String Country;
	  @Column (name="Coach_Name")
	  String Coach_Name;
	  @OneToMany(mappedBy = "team",cascade=CascadeType.ALL)
	  Set<Player> batter;
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getCountry() {
		return Country;
	}
	public void setCountry(String country) {
		Country = country;
	}
	public String getCoach_Name() {
		return Coach_Name;
	}
	public void setCoach_Name(String coach_Name) {
		Coach_Name = coach_Name;
	}
	  public Team() {
		// TODO Auto-generated constructor stub
	}
	public Set<Player> getBatter() {
		return batter;
	}
	public void setBatter(Set<Player> batter) {
		this.batter = batter;
	}
	public Team(String name, String country, String coach_Name, Set<Player> batter) {
		super();
		this.name = name;
		Country = country;
		Coach_Name = coach_Name;
		this.batter = batter;
	}
	
	  
	  

}
