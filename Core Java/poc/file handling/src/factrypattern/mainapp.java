package factrypattern;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class mainapp {
public static void main(String [] args) {
	File myfile=new File ("input.txt");
	try {
		Scanner sc=new Scanner(myfile);
		while(sc.hasNextLine()) {
			String input=sc.nextLine().trim();
			Factory ref=factoryclass.getvehical(input);
			ref.design();
			ref.manufacturing();
			
		}
	}
	catch (FileNotFoundException e){
		e.printStackTrace();
	}
	
}
}
