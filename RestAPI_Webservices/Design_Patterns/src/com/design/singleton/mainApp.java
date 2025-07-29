package com.design.singleton;

public class mainApp {
	public static void main(String[] args) {
        Singleton singleton1 = Singleton.getInstance();
        Singleton singleton2 = Singleton.getInstance();

        singleton1.showMessage();

        System.out.println("Are both instances same? " + (singleton1 == singleton2));
    }
}
