package com.Programming_By_Contract;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;


public class mainapp {

	public static void main(String[] args) throws FileNotFoundException {
		File myfile = new File("src/com/Programming_By_Contract/input.txt");
		Scanner sc=new Scanner(myfile);
		String input=sc.nextLine().trim();
		connectivity ref=alldatabases.anydb(input);
		ref.connection();
		 ref=new mysql();
		 ref.connection();
		 
		

	}

}

