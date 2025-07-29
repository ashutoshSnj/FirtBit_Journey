package Syntaxofjava;

// The java.lang package is imported by default; no need to import it explicitly.
import java.util.Scanner;

public class Scannerchk {

    public static void main(String[] args) {
        // Create a Scanner object to read user input
        Scanner ref = new Scanner(System.in);
         // system is class and in is object of inputstrem class this class is present in java.io package
        //which belong to java.io
        // system class contain the attribut of inputstrm class object

       int no=ref.nextInt();
        // Display explanation of System.out.println
        System.out.println("System is a class.");
        System.out.println("out is an object of PrintStream.");
        System.out.println("println is a method of PrintStream.");

        // Close the Scanner object
        ref.close();
    }
    /*import java.util.Scanner;

public class SystemInOutExample {
    public static void main(String[] args) {
        // Using System.out (PrintStream) to print output to the console
        System.out.println("Welcome to the System Input/Output example!");
        System.out.print("Please enter a number: ");  // Print text to prompt the user

        // Using System.in (InputStream) to read user input (keyboard input)
        // We use Scanner to simplify reading from System.in
        Scanner ref = new Scanner(System.in); // Create a scanner object (ref) to read from System.in

        // Read an integer entered by the user
        int userInput = ref.nextInt(); // Read the input and store it in 'userInput'

        // Print the entered number using System.out (PrintStream)
        System.out.println("You entered: " + userInput); // Output the number entered by the user

        // Close the scanner to avoid resource leak (good practice)
        ref.close();
    }
}

System Class
   |
   +-- static PrintStream out  --> Initialized in System.initializeSystemClass()
            |
            +-- Writes to Console (default) using FileDescriptor.out
            
System.out is a static PrintStream object that provides access to the standard output stream.

It is initialized during JVM startup using the native method setOut0().
By default, it is connected to the console via a FileDescriptor.
You can redirect it to other destinations using System.setOut().
*/
}

