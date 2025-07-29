package com.webclint.communication.WebClint_Api_Communication;

import org.apache.catalina.core.ApplicationContext;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.annotation.Bean;


@SpringBootApplication
public class WebClintApiCommunicationApplication {

	public static void main(String[] args) {
		System.out.println("Main thread: " + Thread.currentThread().getName());

	org.springframework.context.ApplicationContext context=	SpringApplication.run(WebClintApiCommunicationApplication.class, args);
  getbean  bean= context.getBean(getbean.class);

	System.out.println(bean.str);
		System.out.println("Main thread: " + Thread.currentThread().getName());

	}

}
