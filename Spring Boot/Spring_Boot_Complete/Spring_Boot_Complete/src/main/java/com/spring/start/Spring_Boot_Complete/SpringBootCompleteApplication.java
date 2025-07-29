package com.spring.start.Spring_Boot_Complete;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.annotation.ComponentScan;

@SpringBootApplication
@ComponentScan("com.nepackg")
public class SpringBootCompleteApplication {

	public static void main(String[] args) {
		SpringApplication.run(SpringBootCompleteApplication.class, args);
		
	}

}
