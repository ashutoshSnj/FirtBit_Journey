package com.home.auto;
import java.util.Scanner;
public class MainApp {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		House myHouse=new House();
		Scanner sc=new Scanner(System.in);
		
		int choice;
		do {
			System.out.println("Enter Your Choice");
			System.out.println("1.Add Room");
			System.out.println("2.Show Rooms");
			System.out.println("3.Show Device");
			System.out.println("4.Control Devices");
			System.out.println("5.Add Device");
			
			System.out.println("0.Exit");
			choice=sc.nextInt();
			
			switch(choice) {
			case 1:
				myHouse.addRoom();;
				break;
			case 2:
				myHouse.showRooms();
				break;
			case 3:
				myHouse.showDevices();
				break;
			case 4:
				myHouse.ControlDevice();
			case 5:
				myHouse.addDeviceToRoom();
			case 0:
				System.out.println("Thanks!");
				break;
			default:
				System.out.println("Enter Valid Choice");
			}
		}while(choice!=0);
		
	
	}


}

