package com.jparepo.Data_Jpa_Repositrys;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;

@SpringBootApplication
public class DataJpaRepositrysApplication {

	public static void main(String[] args) {
		System.out.println(Thread.currentThread().getName() + "this is in main app");
		SpringApplication.run(DataJpaRepositrysApplication.class, args);
	}

}
