package com.apiGateway.apiGateway;

import org.springframework.cloud.gateway.filter.GatewayFilterChain;
import org.springframework.cloud.gateway.filter.GlobalFilter;
import org.springframework.core.Ordered;
import org.springframework.stereotype.Component;
import org.springframework.web.server.ServerWebExchange;

import reactor.core.publisher.Mono;

@Component
public class GlobalPostFilter implements GlobalFilter,Ordered {

	@Override
	public int getOrder() {
		// TODO Auto-generated method stub
		return 1;
	}

	@Override
    public Mono<Void> filter(ServerWebExchange exchange, org.springframework.cloud.gateway.filter.GatewayFilterChain chain) {
        return chain.filter(exchange).then(Mono.fromRunnable(() -> {
            System.out.println("[PostFilter] Response status: " + exchange.getResponse().getStatusCode());
        }));
    }

}
