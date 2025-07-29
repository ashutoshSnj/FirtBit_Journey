package com.apiGateway.apiGateway;

import org.springframework.cloud.gateway.filter.GatewayFilter;
import org.springframework.cloud.gateway.filter.factory.AbstractGatewayFilterFactory;

import reactor.core.publisher.Mono;

public class LoggingFilter extends AbstractGatewayFilterFactory<Object> {
	 @Override
	    public GatewayFilter apply(Object config) {
	        return (exchange, chain) -> {
	            System.out.println("[LoggingFilter] Path: " + exchange.getRequest().getPath());
	            return chain.filter(exchange).then(Mono.fromRunnable(() -> {
	                System.out.println("[LoggingFilter] Completed processing");
	            }));
	        };
	    }
	}



