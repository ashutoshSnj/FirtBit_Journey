package com.home.auto;
import java.util.ArrayList;
import java.util.List;

public abstract class Room {
	List<Device> devices;
	Room(){
		devices=new ArrayList<Device>();
	}
	public String type() {
		// TODO Auto-generated method stub
		return this.getClass().getSimpleName();
	}

	public void addDevice() {
		// TODO Auto-generated method stub
	}
	public void showDevice() {
		
	}
	
}

