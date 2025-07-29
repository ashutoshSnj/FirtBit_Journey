package com.connection;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.Scanner;



public class FbsConnection {
    

	public static void main(String[] args) {
    	  try {
			Class.forName("com.mysql.cj.jdbc.Driver");
			Connection connect=DriverManager.getConnection("jdbc:mysql://localhost:3306/fbsassignments", "root","#Ashutosh.snj79");
			// get data of the databases  
			connect.getMetaData();
			
			Statement str=connect.createStatement();
			String q1="Select * from members";
			//ResultSet res=str.executeQuery(q1);
			String q2="update book set cost=456 where  book_no=102 ";
			//System.out.println(res.getMetaData().getCatalogName(5));
			
			System.out.println("Enter the q ");
			Scanner sc=new Scanner(System.in);
			 String Query=sc.nextLine();
			boolean result =str.execute(Query);
			
			if(result == true) {
			ResultSet myres=str.executeQuery(Query);
			while(myres.next()) {
				System.out.println(myres.getString(1)+" "+myres.getString(2)+" "+myres.getString(3));
			}
			
			}
			else {
				int val=str.executeUpdate(Query);
				System.out.println(val);
			}
	       // username=' ' and pass=' ' or 1=1; 
			
			// get data of scema mean tables

			//while(res.next()) {
			//	System.out.println(res.getString(1)+" "+res.getString(2)+" "+res.getString(3));
			//}
			
			
			int r1=str.executeUpdate(q2);
			 
;              connect.close();	
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}		
    }
	
        
	}
	
