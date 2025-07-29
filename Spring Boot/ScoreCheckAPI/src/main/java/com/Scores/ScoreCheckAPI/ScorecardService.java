package com.Scores.ScoreCheckAPI;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class ScorecardService {
    private final ScorecardRepository repository;

    public ScorecardService(ScorecardRepository repository) {
        this.repository = repository;
    }

    // Update player's score and balls faced
    public String updateScore(String playerName, int score) {
        Scorecard player = repository.findByPlayerName(playerName);
        if (player == null || player.isOut()) return "Player not found or already out";

        player.setRunsScored(player.getRunsScored() + score);
        player.setBallsFaced(player.getBallsFaced() + 1);

        // Update team score
        List<Scorecard> team = repository.findByTeamName(player.getTeamName());
        int totalRuns = team.stream().mapToInt(Scorecard::getRunsScored).sum();
        int totalBalls = team.stream().mapToInt(Scorecard::getBallsFaced).sum();

        for (Scorecard p : team) {
            p.setTotalScore(totalRuns);
            p.setTotalBalls(totalBalls);
            repository.save(p);
        }

        return "Score updated: " + player.getPlayerName() + " - " + player.getRunsScored() + "/" + player.getBallsFaced();
    }

    // Mark player as out
    public String markOut(String playerName, String modeOfWicket) {
        Scorecard player = repository.findByPlayerName(playerName);
        if (player == null || player.isOut()) return "Player not found or already out";

        player.setOut(true);
        player.setModeOfWicket(modeOfWicket);
        player.setNotOut(false);

        // Update total wickets
        List<Scorecard> team = repository.findByTeamName(player.getTeamName());
        int totalWickets = (int) team.stream().filter(Scorecard::isOut).count();

        for (Scorecard p : team) {
            p.setTotalWickets(totalWickets);
            repository.save(p);
        }

        return playerName + " is OUT (" + modeOfWicket + ")";
    }

    // Get current match score
    public String getCurrentScore() {
        List<Scorecard> players = repository.findAll();
        StringBuilder response = new StringBuilder();

        for (Scorecard p : players) {
            response.append(p.getPlayerName()).append(" - ").append(p.getRunsScored()).append("/").append(p.getBallsFaced()).append("\n");
        }

        if (!players.isEmpty()) {
            response.append(players.get(0).getTeamName()).append(" - ").append(players.get(0).getTotalScore()).append("/")
                    .append(players.get(0).getTotalWickets());
        }

        return response.toString();
    }

    // Get complete batting summary
    public String getCompleteScore() {
        List<Scorecard> players = repository.findAll();
        StringBuilder response = new StringBuilder();

        for (Scorecard p : players) {
            if (p.getBallsFaced() > 0) {
                response.append(p.getPlayerName()).append(" - ").append(p.getRunsScored()).append("/").append(p.getBallsFaced());
                if (p.isNotOut()) response.append("*");
                response.append("\n");
            } else {
                response.append(p.getPlayerName()).append(" - Did not bat\n");
            }
        }

        if (!players.isEmpty()) {
            response.append(players.get(0).getTeamName()).append(" - ").append(players.get(0).getTotalScore()).append("/")
                    .append(players.get(0).getTotalWickets());
        }

        return response.toString();
    }
}
