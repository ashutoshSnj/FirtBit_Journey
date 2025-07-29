package com.start;

public class MySingleton {

    // Step 1: Create a private static instance of the class
    private static MySingleton instance;

    // Step 2: Make the constructor private
    private MySingleton() {
        System.out.println("Singleton instance created");
    }

    // Step 3: Provide a public static method to get the instance
    public static MySingleton getInstance() {
        if (instance == null) {
            instance = new MySingleton();
        }
        return instance;
    }
}

