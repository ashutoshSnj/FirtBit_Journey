
package com.connection;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.Scanner;

public class preparedstatment_preparedquery {

	public static void main(String[] args) {
		Scanner sc=new Scanner (System.in); 
		try {
			Class.forName("com.mysql.cj.jdbc.Driver");
			
			Connection connect=DriverManager.getConnection("jdbc:mysql://localhost:3306/fbsassignments", "root","#Ashutosh.snj79");
			    connect.setAutoCommit(false);
			String q="select * from book where  author_name=?";
			//it is sub interface of Statement
			 PreparedStatement stm=connect.prepareStatement(q);
			System.out.println("Enter the name = ");
		   String name=sc.nextLine();
			 stm.setString(1, name);
			 ResultSet result=stm.executeQuery();	
			 
			 while(result.next()) {
	 // book_no | book_name           | author_name | cost   | category
				 System.out.println("ID: " + result.getInt("book_no"));
	                System.out.println("Title: " + result.getString("book_name"));
	                System.out.println("Author: " + result.getString("author_name"));
	                 System.out.println("Cost: "+result.getInt("cost"));
	                System.out.println("---------------------------");
			 }
			 PreparedStatement stm1=connect.prepareStatement("insert into users values(?,?,?)");
			   System.out.println("Enter the username = ");
	           String username=sc.nextLine();
	           System.out.println("Enter the pass = ");
			   int pass=sc.nextInt();
			   sc.nextLine();
			   System.out.println("Enter the mobili no= ");
			   String mobileno=sc.nextLine();
			/* String username="Ashutosh s";
			 int pass=4587965;
			 String mobileno="8010635287";*/
			   stm1.setString(1, username);
			   stm1.setInt(2, pass);
			   stm1.setString(3, mobileno);
			   int queryokk=stm1.executeUpdate();
			   connect.commit();
			   System.out.println(queryokk);
			  
			 connect.close();	
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
			
	}
// store procceser
	// statment sub interface 
}

/*
package com.connection;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.Scanner;

public class sqlinjection {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try {
            // Step 1: Load MySQL JDBC Driver
            Class.forName("com.mysql.cj.jdbc.Driver");

            // Step 2: Establish connection to the database
            Connection connect = DriverManager.getConnection(
                "jdbc:mysql://localhost:3306/fbsassignments", "root", "#Ashutosh.snj79");

            // Step 3: Define the SQL query with a placeholder
            String q = "SELECT * FROM book WHERE author_name = ?";
            PreparedStatement stm = connect.prepareStatement(q);

            // Step 4: Get the user input for the placeholder
            System.out.println("Enter the author's name: ");
            String name = sc.nextLine();

            // Step 5: Set the placeholder value
            stm.setString(1, name);

            // Step 6: Execute the query
            ResultSet result = stm.executeQuery();

            // Step 7: Process the result set
            while (result.next()) {
                // Replace "column_name" with your actual database column names
                System.out.println("ID: " + result.getInt(1));
                System.out.println("Title: " + result.getString(2));
                System.out.println("Author: " + result.getString(3));
                System.out.println("---------------------------");
            }

            // Step 8: Close resources
            result.close();
            stm.close();
            connect.close();

        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        } catch (SQLException e) {
            e.printStackTrace();
        } finally {
            sc.close();
        }
    }
}
*/
