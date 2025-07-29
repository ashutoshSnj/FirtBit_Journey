package com.Scores.ScoreCheckAPI;

import org.springframework.data.jpa.repository.JpaRepository;
import java.util.List;

public interface ScorecardRepository extends JpaRepository<Scorecard, Integer> {
    Scorecard findByPlayerName(String playerName);
    List<Scorecard> findByTeamName(String teamName);
}