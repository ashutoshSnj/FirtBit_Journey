package Syntaxofjava;

import java.io.PrintStream;

public class Main {
	
	    public static void main(String[] args) {
	        // System.out is the default output stream to the console
	        PrintStream Ashu = System.out; // ashu refers to System.out
	        
	        // Both printStream and System.out now refer to the same PrintStream object
	        Ashu.println("Hello, this is from printStream!");
	        System.out.println("Hello, this is from System.out!");
	        
	        // Both printStream and System.out will display the same output
	    }
	}


