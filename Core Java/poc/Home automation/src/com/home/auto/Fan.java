package com.home.auto;

public class Fan extends Device {
    int speed;

    public Fan() {
        super();
        this.speed = 1; // Default speed
    }

    @Override
    public void turnOn() {
        super.turnOn();
        System.out.println("Fan is now running at speed " + speed);
    }

    @Override
    public void turnOff() {
        super.turnOff();
        System.out.println("Fan is now off");
    }

    public void setSpeed(int speed) {
        if (speed >= 1 && speed <= 5) {
            this.speed = speed;
            System.out.println("Fan speed set to " + speed);
        } else {
            System.out.println("Invalid speed. Please set between 1 and 5.");
        }
    }

    @Override
    public String type() {
        return "Fan";
    }
}
