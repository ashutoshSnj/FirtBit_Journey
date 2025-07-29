package com.home.auto;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class House {
    List<Room> rooms;

    House() {
        rooms = new ArrayList<>();
    }

    public void addRoom() {
        Scanner sc = new Scanner(System.in);
        int choice;
        do {
            System.out.println("\n=== Add Room ===");
            System.out.println("Select the type of room to add:");
            System.out.println("1. BedRoom");
            System.out.println("2. Kitchen");
            System.out.println("3. Living Room");
            System.out.println("4. Collidor");
            System.out.println("5. WashRoom");
            System.out.println("0. Go Back");
            System.out.print("Enter your choice: ");

            while (!sc.hasNextInt()) {
                System.out.print("Invalid input. Please enter a number: ");
                sc.next();
            }
            choice = sc.nextInt();

            Room myRoom;
            switch (choice) {
                case 1:
                    myRoom = new BedRoom();
                    rooms.add(myRoom);
                    System.out.println("BedRoom added successfully!");
                    break;
                case 2:
                    myRoom = new Kitchen();
                    rooms.add(myRoom);
                    System.out.println("Kitchen added successfully!");
                    break;
                case 3:
                    myRoom = new LivingRoom();
                    rooms.add(myRoom);
                    System.out.println("Living Room added successfully!");
                    break;
                case 4:
                    myRoom = new Collidor();
                    rooms.add(myRoom);
                    System.out.println("Collidor added successfully!");
                    break;
                case 5:
                    myRoom = new WashRoom();
                    rooms.add(myRoom);
                    System.out.println("WashRoom added successfully!");
                    break;
                case 0:
                    System.out.println("Returning to the main menu...");
                    break;
                default:
                    System.out.println("Invalid choice. Please try again.");
            }
        } while (choice != 0);
    }

    public void showRooms() {
        if (rooms.isEmpty()) {
            System.out.println("\nNo rooms available.");
        } else {
            System.out.println("\n=== Rooms in the House ===");
            int count = 1;
            for (Room ref : rooms) {
                System.out.println(count + ". " + ref.getClass().getSimpleName());
                count++;
            }
        }
    }

    public Room getRoom() {
        if (rooms.isEmpty()) {
            System.out.println("\nNo rooms available. Please add a room first.");
            return null;
        }

        Scanner sc = new Scanner(System.in);
        this.showRooms();
        System.out.println("0.Exit");
        System.out.print("Enter the room number: ");
        int choice;

        while (!sc.hasNextInt()) {
            System.out.print("Invalid input. Please enter a number: ");
            sc.next();
        }
        choice = sc.nextInt();

        if ((choice > 0 && choice <= this.rooms.size())) {
            return rooms.get(choice - 1);
        }else if(choice==0){
        	return null;
        }
        	else {
            System.out.println("Invalid room number. Returning to main menu.");
            return null;
        }
    }

    public void addDeviceToRoom() {
        Room myRoom = this.getRoom();
        if (myRoom != null) {
            myRoom.addDevice();
        }
    }

    public void showDevices() {
        if (rooms.isEmpty()) {
            System.out.println("\nNo rooms available. Please add rooms first.");
            return;
        }

        System.out.println("\n=== Devices in the House ===");
        for (Room ref : rooms) {
            if (ref.devices.size() > 0) {
                System.out.println(ref.type() + " Devices:");
                for (Device dev : ref.devices) {
                    String status = dev.isOn ? "On" : "Off";
                    String lastOnTime = (dev.duration > 0)
                            ? new java.util.Date(dev.duration).toString()
                            : "Never turned on";
                    System.out.println("   " + dev.type() + " - Status: " + status + ", Last On: " + lastOnTime);
                }
            } else {
                System.out.println(ref.type() + " has no devices.");
            }
        }
    }

    public void ControlDevice() {
        Room myRoom = this.getRoom();
        if (myRoom != null && !myRoom.devices.isEmpty()) {
            Scanner sc = new Scanner(System.in);
            for (Device device : myRoom.devices) {
                System.out.println("\nControl " + device.type() + ":");
                System.out.println("1. Turn On");
                System.out.println("2. Turn Off");
                if (device instanceof TV) {
                    System.out.println("3. Change Channel");
                    System.out.println("4. Set Volume");
                } else if (device instanceof Ac) {
                    System.out.println("3. Set Temperature");
                    System.out.println("4. Set Mode");
                } else if (device instanceof Ovan) {
                    System.out.println("3. Set Temperature");
                }
                System.out.println("0. Skip");
                System.out.print("Enter your choice: ");

                int action;
                while (!sc.hasNextInt()) {
                    System.out.print("Invalid input. Please enter a number: ");
                    sc.next();
                }
                action = sc.nextInt();

                switch (action) {
                    case 1:
                        device.turnOn();
                        break;
                    case 2:
                        device.turnOff();
                        break;
                    case 3:
                        if (device instanceof TV) {
                            System.out.print("Enter channel number: ");
                            int channel = sc.nextInt();
                            ((TV) device).changeChannel(channel);
                        } else if (device instanceof Ac) {
                            System.out.print("Enter temperature: ");
                            int temperature = sc.nextInt();
                            ((Ac) device).setTemperature(temperature);
                        } else if (device instanceof Ovan) {
                            System.out.print("Enter temperature: ");
                            int temperature = sc.nextInt();
                            ((Ovan) device).setTemperature(temperature);
                        }
                        break;
                    case 4:
                        if (device instanceof TV) {
                            System.out.print("Enter volume (1-100): ");
                            int volume = sc.nextInt();
                            ((TV) device).setVolume(volume);
                        } else if (device instanceof Ac) {
                            System.out.print("Enter mode (Cool/Heat/Fan): ");
                            String mode = sc.next();
                            ((Ac) device).setMode(mode);
                        }
                        break;
                    case 0:
                        System.out.println("Skipping " + device.type());
                        break;
                    default:
                        System.out.println("Invalid choice. Skipping " + device.type());
                }
            }
        } else if (myRoom != null) {
            System.out.println("\nNo devices available in this room.");
        }
    }
}

/*import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
public class House {
	List<Room> rooms;
	
	House(){
		rooms=new ArrayList<Room>();
	}
	
	public void addRoom() {
		Scanner sc=new Scanner(System.in);
		int choice;
		do {
			System.out.println("Enter Your Choice");
			System.out.println("1.BedRoom");
			System.out.println("2.Kitchen");
			System.out.println("3.Living Room");
			System.out.println("4.Collidor");
			System.out.println("5.WashRoom");
			System.out.println("0.Exit");

			choice=sc.nextInt();
			Room myRoom;
			switch(choice) {
			case 1:
				myRoom=new BedRoom();
				rooms.add(myRoom);
				break;
			case 2:
				myRoom=new Kitchen();
				rooms.add(myRoom);
				break;
			case 3:
				myRoom=new LivingRoom();
				rooms.add(myRoom);
				break;
			case 4:
				myRoom=new Collidor();
				rooms.add(myRoom);
				break;
			case 5:
			    myRoom=new WashRoom();
				rooms.add(myRoom);
				break;
			case 0:
				break;
			default:
				System.out.println("Enter Valid Choice");
			}
		}while(choice!=0);
		
	}
	
	public void showRooms() {
		int count=1;
		for(Room ref:rooms) {
			System.out.println(count+"."+ref.getClass().getSimpleName());
			count++;
		}
	}
	
	public Room getRoom() {
		Scanner sc=new Scanner(System.in);
			this.showRooms();
			int choice;
			System.out.println("Enter Your Choice");
			choice=sc.nextInt();
			if(choice>0 && choice<=this.rooms.size()) {
				return rooms.get(choice-1);
			}else {
				System.out.println("Enter Valid Room");
			}
			return null;
		
	}
	public void addDeviceToRoom() {
		// TODO Auto-generated method stub
		if(rooms.size()>0) {
			Room myRoom=this.getRoom();
			if(myRoom!=null)
			myRoom.addDevice();
			
		}else {
			System.out.println("No Rooms Available");
		}
	}


	public void showDevices() {
		// TODO Auto-generated method stub
		    for (Room ref : rooms) {
		        if (ref.devices.size() > 0) {
		            System.out.println(ref.type() + " Devices:");
		            for (Device dev : ref.devices) {
		                String status = dev.isOn ? "On" : "Off";
		                String lastOnTime = (dev.duration > 0) 
		                    ? new java.util.Date(dev.duration).toString() 
		                    : "Never turned on";
		                System.out.println("   " + dev.type() + " - Status: " + status + ", Last On: " + lastOnTime);
		            }
		        } else {
		            System.out.println(ref.type() + " has no devices.");
		        }
		    }
		
	}

	public void ContronDevice() {
		// TODO Auto-generated method stub
		    Room myRoom = this.getRoom();
		    if (myRoom != null) {
		        for (Device device : myRoom.devices) {
		            System.out.println("Control " + device.type());
		            System.out.println("1. Turn On");
		            System.out.println("2. Turn Off");
		            System.out.println("0. Skip");

		            Scanner sc = new Scanner(System.in);
		            int action = sc.nextInt();
		            switch (action) {
		                case 1:
		                    device.turnOn();
		                    break;
		                case 2:
		                    device.turnOff();
		                    break;
		                case 0:
		                    break;
		                default:
		                    System.out.println("Invalid Choice");
		            }
		        }
		    }
	}
}
*/
