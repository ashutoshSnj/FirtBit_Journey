package com.home.auto;


public class Ac extends Device {
    int temperature;
    String mode;

    public Ac() {
        super();
        this.temperature = 22; // Default temperature
        this.mode = "Cool";    // Default mode
    }

    @Override
    public void turnOn() {
        super.turnOn();
        System.out.println("AC is now on. Mode: " + mode + ", Temperature: " + temperature + "°C");
    }

    @Override
    public void turnOff() {
        super.turnOff();
        System.out.println("AC is now off");
    }

    public void setTemperature(int temperature) {
        if (temperature >= 16 && temperature <= 30) {
            this.temperature = temperature;
            System.out.println("Temperature set to " + temperature + "°C");
        } else {
            System.out.println("Invalid temperature. Please set between 16°C and 30°C.");
        }
    }

    public void setMode(String mode) {
        if (mode.equalsIgnoreCase("Cool") || mode.equalsIgnoreCase("Heat") || mode.equalsIgnoreCase("Fan")) {
            this.mode = mode;
            System.out.println("AC mode set to " + mode);
        } else {
            System.out.println("Invalid mode. Please choose between Cool, Heat, or Fan.");
        }
    }

    @Override
    public String type() {
        return "AC";
    }
}

