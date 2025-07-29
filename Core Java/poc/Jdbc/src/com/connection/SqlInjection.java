package com.connection;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.Scanner;

public class SqlInjection {

	public static void main(String[] args) {
		 
       
        Scanner sc=new Scanner(System.in);
        
        System.out.println("Enter the username= ");
           String username=sc.nextLine();
           System.out.println("Enter the password = ");
           int password=sc.nextInt();

        try {
			Class.forName("com.mysql.cj.jdbc.Driver");
			
			Connection connect=DriverManager.getConnection("jdbc:mysql://localhost:3306/fbsassignments", "root","#Ashutosh.snj79");
			Statement str=connect.createStatement();
			String Qery="Select * from users where username= '"+username+"'"+" "+"And"+" "+"password= "+password;
			System.out.println(Qery);
  
			ResultSet result=str.executeQuery(Qery);
			if(result.next()) {
				System.out.println("Valid user");
			}
			else {
				System.out.println("Invalid user");
			}
			
			
			
			
			
			connect.close();
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

  
	}

}
/* import java.sql.*;

public class SQLInjectionExample {
    public static void main(String[] args) {
        String username = "admin";
        String password = "' OR '1'='1";  // SQL Injection payload

        // Vulnerable query without proper parameterization
        String query = "SELECT * FROM users WHERE username = '" + username + "' AND password = '" + password + "'";

        try {
            Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/your_database", "root", "password");
            Statement stmt = conn.createStatement();
            ResultSet rs = stmt.executeQuery(query);

            if (rs.next()) {
                System.out.println("Logged in successfully!");
            } else {
                System.out.println("Invalid username or password.");
            }

            rs.close();
            stmt.close();
            conn.close();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }
}

==============================================================================================================
import java.sql.*;

public class SecureSQLExample {
    public static void main(String[] args) {
        String username = "admin";  // Username provided by the user
        String password = "password123";  // Password provided by the user

        // Step 1: SQL query with placeholders for user inputs (no direct concatenation)
        String query = "SELECT * FROM users WHERE username = ? AND password = ?";

        try {
            // Step 2: Establish a connection to the database
            Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/your_database", "root", "password");

            // Step 3: Prepare the SQL statement with placeholders
            PreparedStatement stmt = conn.prepareStatement(query);
            stmt.setString(1, username);  // Step 4: Safely bind the username value to the first placeholder
            stmt.setString(2, password);  // Step 5: Safely bind the password value to the second placeholder

            // Step 6: Execute the query with the safe parameterized inputs
            ResultSet rs = stmt.executeQuery();

            // Step 7: Check if a matching user is found
            if (rs.next()) {
                System.out.println("Logged in successfully!");  // If user found, login is successful
            } else {
                System.out.println("Invalid username or password.");  // If no user found, login fails
            }

            // Step 8: Close the resources (ResultSet, PreparedStatement, Connection)
            rs.close();
            stmt.close();
            conn.close();
        } catch (SQLException e) {
            e.printStackTrace();  // Step 9: Handle any SQL exceptions that may occur
        }
    }
}
*/
