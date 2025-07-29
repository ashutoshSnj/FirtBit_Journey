package com.exp;

public class justpoc {
    public static void main(String[] args) {
        try {
            System.out.println("First Try Block");
            return; // Trying to exit the method here
        } catch (Exception e) {
            System.out.println("First Catch Block");
        } finally {
            System.out.println("First Finally Block"); // This WILL execute even after return
        }

        // Second Try-Catch-Finally Block
        try {
            System.out.println("Second Try Block");
        } catch (Exception e) {
            System.out.println("Second Catch Block");
        } finally {
            System.out.println("Second Finally Block"); // This will also execute
        }
    }
}
