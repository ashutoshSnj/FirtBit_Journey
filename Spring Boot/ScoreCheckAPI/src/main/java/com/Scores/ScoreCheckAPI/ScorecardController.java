package com.Scores.ScoreCheckAPI;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@RestController
@RequestMapping("/scoresheet")
public class ScorecardController {
    private final ScorecardService service;

    public ScorecardController(ScorecardService service) {
        this.service = service;
    }

    @PostMapping("/{player}/{score}")
    public String updateScore(@PathVariable String player, @PathVariable int score) {
        return service.updateScore(player, score);
    }

    @PostMapping("/{player}/out")
    public String markOut(@PathVariable String player, @RequestParam String mode) {
        return service.markOut(player, mode);
    }

    @GetMapping("/score")
    public String getScore() {
        return service.getCurrentScore();
    }

    @GetMapping("/completescore")
    public String getCompleteScore() {
        return service.getCompleteScore();
    }
}