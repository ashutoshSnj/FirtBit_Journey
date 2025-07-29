package com.connection;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;



public class frist {

	public static void main(String[] args) {
	// fully qulified class name pckg+class
		// 1
		try {
			Class.forName("com.mysql.cj.jdbc.Driver");
   // 2
			// protocol:subprotocol:db-specific information
			
			// jdbc       mysql
			//     protocol:subprotocol=server present : db info
			Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/fbsassignments","root","#Ashutosh.snj79");
			                System.out.println(con);                                                //portno 
			//System.out.println(con.getMetaData());
			String query="select * from book";
           
			Statement stmt = con.createStatement();
			             
			 
			 ResultSet rs=stmt.executeQuery(query);
			// con.close();
			 // retrive the data
			
			 System.out.println(rs.getMetaData().getColumnDisplaySize(2)); 
			    while(rs.next()){
			 System.out.println(rs.getString(1)+" " + rs.getString(2));
				// System.out.println(rs.getMetaData());
			 }
			 con.close();
		}
		
		catch (ClassNotFoundException e) {
			e.printStackTrace();
		} 
	     catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	 
	}
	
// Exicutupdate to dml query
	// rowset
}
