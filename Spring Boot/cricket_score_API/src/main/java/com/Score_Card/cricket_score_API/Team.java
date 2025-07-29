package com.Score_Card.cricket_score_API;

import java.util.Set;

import jakarta.persistence.CascadeType;
import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.Id;
import jakarta.persistence.OneToMany;
import jakarta.persistence.Table;

@Entity
@Table (name="Team")
public class Team {
	@Id
	@Column(name="Teamname")
    String Teamname;
	 @OneToMany(mappedBy = "Teams",cascade=CascadeType.ALL)
    Set<Player> player;
    @Column(name="Score")
    
    int Score;
    @Column(name="Wickets")
    int Wickets;
    public Team() {
		// TODO Auto-generated constructor stub
	}
	public Team(String teamname, Set<Player> player, int score, int wickets) {
		super();
		Teamname = teamname;
		this.player = player;
		Score = score;
		Wickets = wickets;
	}
	public String getTeamname() {
		return Teamname;
	}
	public void setTeamname(String teamname) {
		Teamname = teamname;
	}
	public Set<Player> getPlayer() {
		return player;
	}
	public void setPlayer(Set<Player> player) {
		this.player = player;
	}
	public int getScore() {
		return Score;
	}
	public void setScore(int score) {
		Score = score;
	}
	public int getWickets() {
		return Wickets;
	}
	public void setWickets(int wickets) {
		Wickets = wickets;
	}
    
}
