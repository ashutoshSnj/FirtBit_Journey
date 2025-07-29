package com.home.auto;

public class Ovan extends Device {
    int temperature;

    public Ovan() {
        super();
        this.temperature = 180; // Default temperature
    }

    @Override
    public void turnOn() {
        super.turnOn();
        System.out.println("Oven is now on at " + temperature + "°C");
    }

    @Override
    public void turnOff() {
        super.turnOff();
        System.out.println("Oven is now off");
    }

    public void setTemperature(int temperature) {
        if (temperature >= 50 && temperature <= 250) {
            this.temperature = temperature;
            System.out.println("Oven temperature set to " + temperature + "°C");
        } else {
            System.out.println("Invalid temperature. Please set between 50°C and 250°C.");
        }
    }

    @Override
    public String type() {
        return "Oven";
    }
}

