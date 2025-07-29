package com.Scores.ScoreCheckAPI;

import jakarta.persistence.GeneratedValue;
import jakarta.persistence.GenerationType;
import jakarta.persistence.Id;
import jakarta.persistence.Table;

@Table(name="scorecard")
public class Scorecard {
	     @Id
	    @GeneratedValue(strategy = GenerationType.IDENTITY)
	     int playerId;

	     String playerName;
	     String teamName;
	    int runsScored;
	     int ballsFaced;
	     boolean isOut;
	     String modeOfWicket;
	    int battingOrder;
	   boolean isNotOut;
	    int totalScore;
	   int totalWickets;
	     int totalBalls;
	    String matchStatus;
	    
	    public Scorecard() {
			// TODO Auto-generated constructor stub
		}
	    
		public Scorecard(int playerId, String playerName, String teamName, int runsScored, int ballsFaced,
				boolean isOut, String modeOfWicket, int battingOrder, boolean isNotOut, int totalScore,
				int totalWickets, int totalBalls, String matchStatus) {
			super();
			this.playerId = playerId;
			this.playerName = playerName;
			this.teamName = teamName;
			this.runsScored = runsScored;
			this.ballsFaced = ballsFaced;
			this.isOut = isOut;
			this.modeOfWicket = modeOfWicket;
			this.battingOrder = battingOrder;
			this.isNotOut = isNotOut;
			this.totalScore = totalScore;
			this.totalWickets = totalWickets;
			this.totalBalls = totalBalls;
			this.matchStatus = matchStatus;
		}


		public int getPlayerId() {
			return playerId;
		}


		public void setPlayerId(int playerId) {
			this.playerId = playerId;
		}


		public String getPlayerName() {
			return playerName;
		}


		public void setPlayerName(String playerName) {
			this.playerName = playerName;
		}


		public String getTeamName() {
			return teamName;
		}


		public void setTeamName(String teamName) {
			this.teamName = teamName;
		}


		public int getRunsScored() {
			return runsScored;
		}


		public void setRunsScored(int runsScored) {
			this.runsScored = runsScored;
		}


		public int getBallsFaced() {
			return ballsFaced;
		}


		public void setBallsFaced(int ballsFaced) {
			this.ballsFaced = ballsFaced;
		}


		public boolean isOut() {
			return isOut;
		}


		public void setOut(boolean isOut) {
			this.isOut = isOut;
		}


		public String getModeOfWicket() {
			return modeOfWicket;
		}


		public void setModeOfWicket(String modeOfWicket) {
			this.modeOfWicket = modeOfWicket;
		}


		public int getBattingOrder() {
			return battingOrder;
		}


		public void setBattingOrder(int battingOrder) {
			this.battingOrder = battingOrder;
		}


		public boolean isNotOut() {
			return isNotOut;
		}


		public void setNotOut(boolean isNotOut) {
			this.isNotOut = isNotOut;
		}


		public int getTotalScore() {
			return totalScore;
		}


		public void setTotalScore(int totalScore) {
			this.totalScore = totalScore;
		}


		public int getTotalWickets() {
			return totalWickets;
		}


		public void setTotalWickets(int totalWickets) {
			this.totalWickets = totalWickets;
		}


		public int getTotalBalls() {
			return totalBalls;
		}


		public void setTotalBalls(int totalBalls) {
			this.totalBalls = totalBalls;
		}


		public String getMatchStatus() {
			return matchStatus;
		}


		public void setMatchStatus(String matchStatus) {
			this.matchStatus = matchStatus;
		}
	    
}
