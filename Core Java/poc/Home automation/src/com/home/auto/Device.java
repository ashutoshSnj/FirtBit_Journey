package com.home.auto;


public class Device {
	boolean isOn;
	long duration;
	Device() {
        this.isOn = false;
        this.duration = 0;
    }
	public void turnOn() {
		if (!isOn) {
            isOn = true;
            duration = System.currentTimeMillis();
            System.out.println(type() + " turned on at " + new java.util.Date(duration));
        } else {
            System.out.println(type() + " is already on. Last turned on at " + new java.util.Date(duration));
        }
	}
	public void turnOff() {
		if (isOn) {
            isOn = false;
            System.out.println(type() + " turned off.");
        } else {
            System.out.println(type() + " is already off.");
        }
	}
	public String type() {
		return this.getClass().getSimpleName();
	}
}

