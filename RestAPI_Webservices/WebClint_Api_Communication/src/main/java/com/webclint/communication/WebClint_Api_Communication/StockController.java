package com.webclint.communication.WebClint_Api_Communication;


import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;
import org.springframework.web.reactive.function.client.WebClient;

@RestController
public class StockController {

  WebClient webClient = WebClient.builder().baseUrl("https://financialmodelingprep.com/api/v3").build();

    @GetMapping("/stock/{symbol}")
    public void getStockData(@PathVariable String symbol) {
        webClient.get()
                .uri(uriBuilder -> uriBuilder
                        .path("/quote")
                        .queryParam("symbol", symbol) 
                        .queryParam("apikey", "demo") 
                        .build())
                .retrieve()
                .bodyToMono(String.class)
                .subscribe(response -> {
                    System.out.println("Stock Data: " + response); 
                });

          }
}
