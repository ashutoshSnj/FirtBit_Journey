package com.home.auto;

import java.util.Scanner;

public class Collidor extends Room {
	public void addDevice() {
		// TODO Auto-generated method stub
		int choice;
		do {
			System.out.println("Which Device To Add");
			System.out.println("1.Fan");
			System.out.println("2.Ac");
			System.out.println("0.Exit");
			
			Scanner sc=new Scanner(System.in);
			choice=sc.nextInt();
			switch(choice) {
			case 1:
				devices.add(new Fan());
				break;
			case 2:
				devices.add(new Ac());
				break;
			case 0:
				break;
			default:
				System.out.println("Invalid Choice");
				break;
			}
		}while(choice!=0);
	}
}
