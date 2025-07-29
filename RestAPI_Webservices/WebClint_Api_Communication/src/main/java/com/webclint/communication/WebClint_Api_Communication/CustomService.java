package com.webclint.communication.WebClint_Api_Communication;

import java.util.List;
import java.util.concurrent.CompletableFuture;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.scheduling.annotation.Async;
import org.springframework.scheduling.annotation.EnableAsync;
import org.springframework.stereotype.Service;
@Service

@EnableAsync
public class CustomService {
	@Autowired
    StudentRepositry repo;
	@Async
    public  CompletableFuture<List<Student>> getstu(){
		System.out.println(Thread.currentThread().getName());
		/*try {
			Thread.sleep(3000);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}*/
    	return CompletableFuture.completedFuture(repo.findAll());
    }
}
