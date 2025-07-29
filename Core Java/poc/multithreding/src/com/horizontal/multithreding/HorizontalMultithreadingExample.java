package com.horizontal.multithreding;

//Task 1: Order Processing
class OrderProcessor extends Thread {
 @Override
 public void run() {
     System.out.println("Order Processing started by " + Thread.currentThread().getName());
     try {
         Thread.sleep(2000); // Simulate order processing time
     } catch (InterruptedException e) {
         System.out.println("Order Processing interrupted.");
     }
     System.out.println("Order Processing completed by " + Thread.currentThread().getName());
 }
}

//Task 2: Email Sending
class EmailSender extends Thread {
 @Override
 public void run() {
     System.out.println("Email Sending started by " + Thread.currentThread().getName());
     try {
         Thread.sleep(1500); // Simulate email sending time
     } catch (InterruptedException e) {
         System.out.println("Email Sending interrupted.");
     }
     System.out.println("Email Sending completed by " + Thread.currentThread().getName());
 }
}

//Task 3: Report Generation
class ReportGenerator extends Thread {
 @Override
 public void run() {
     System.out.println("Report Generation started by " + Thread.currentThread().getName());
     try {
         Thread.sleep(3000); // Simulate report generation time
     } catch (InterruptedException e) {
         System.out.println("Report Generation interrupted.");
     }
     System.out.println("Report Generation completed by " + Thread.currentThread().getName());
     
 }
}

public class HorizontalMultithreadingExample {
 public static void main(String[] args) {
     // Create threads for different tasks
     Thread orderProcessor = new OrderProcessor();
     Thread emailSender = new EmailSender();
     Thread reportGenerator = new ReportGenerator();

     // Start threads
     orderProcessor.start();
     emailSender.start();
     reportGenerator.start();
 }
}
