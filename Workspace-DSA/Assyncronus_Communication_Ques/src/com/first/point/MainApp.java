package com.first.point;

public class MainApp {
public static void main(String[] args) {
	Target target=new Target();
	FristObserver observer1=new FristObserver(target);
	SecondObserver observer2 = new SecondObserver(target);
	target.insert(85);
}
}
