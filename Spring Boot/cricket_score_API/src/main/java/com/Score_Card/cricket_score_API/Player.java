package com.Score_Card.cricket_score_API;

import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.Id;
import jakarta.persistence.ManyToOne;
import jakarta.persistence.Table;

@Entity
@Table(name="Player")
public class Player{
	@Id
	@Column(name="Player_id")
	int Player_id;
	@Column(name="Player_name")
	String Player_name;
	@ManyToOne(targetEntity = Team.class)
	@Column(name="Team_name")
	Team Teams;
	@Column(name="Status")
	String Status;
	@Column(name="Score")
	String  Score;
	
	public Player() {
		// TODO Auto-generated constructor stub
	}

	public int getPlayer_id() {
		return Player_id;
	}

	public void setPlayer_id(int player_id) {
		Player_id = player_id;
	}

	public String getPlayer_name() {
		return Player_name;
	}

	public void setPlayer_name(String player_name) {
		Player_name = player_name;
	}

	public Team getTeams() {
		return Teams;
	}

	public void setTeams(Team teams) {
		Teams = teams;
	}

	public String getStatus() {
		return Status;
	}

	public void setStatus(String status) {
		Status = status;
	}

	public String getScore() {
		return Score;
	}

	public void setScore(String score) {
		Score = score;
	}

	public Player(int player_id, String player_name, Team teams, String status, String score) {
		super();
		Player_id = player_id;
		Player_name = player_name;
		Teams = teams;
		Status = status;
		Score = score;
	} 
}
