package com.webclint.communication.WebClint_Api_Communication;

import java.util.List;
import java.util.concurrent.CompletableFuture;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;
import org.springframework.web.reactive.function.client.WebClient;


@RestController
public class TestCode {

    @Autowired
  private StudentRepositry ref;
    
    @Autowired
   CustomService ref1;
    
    private final WebClient client = WebClient.builder().baseUrl("http://localhost:8080").build();

    @GetMapping("/Student")
    public CompletableFuture<List<Student>> getStudents() {
    	System.out.println(Thread.currentThread().getName());
    	
        return ref1.getstu();
    }

    @GetMapping("/Student/get")
    public List<Student> getStudentsViaWebClient() {
        return client.get()
                .uri("/Student").retrieve().bodyToFlux(Student.class)
                .collectList() .block(); 
    }

    @GetMapping("/Student/getas")
    public void getStudentsAsync() {
        client.get()
                .uri("/Student").retrieve()
                .bodyToFlux(Student.class)
                .subscribe(student -> System.out.println(student));  
    }

   

    // Async Flux method - count students as they arrive
    @GetMapping("/Student/flux/count")
    public void countStudentsAsync() {
        client.get()
                .uri("/Student")
                .retrieve()
                .bodyToFlux(Student.class)
                .count()
                .subscribe(count -> System.out.println("Total students: " + count));
    }

    
    @GetMapping("/Student/flux/delay")
    public void processStudentsWithDelayAsync() {
        client.get()
                .uri("/Student")
                .retrieve()
                .bodyToFlux(Student.class)
                .doOnNext(student -> {
                    try {
                        Thread.sleep(500);  
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                    }
                    System.out.println("Processed: " + student);
                })
                .subscribe();
    }
    @GetMapping("/Student/mono")
    public Student getSingleStudent() {
        return client.get().uri("/Student")
                .retrieve()
                .bodyToFlux(Student.class)
                .next()  
                .block(); 
    }
}
