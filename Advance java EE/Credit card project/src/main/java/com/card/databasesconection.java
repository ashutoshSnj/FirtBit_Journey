package com.card;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
// data persistance leyer
public class databasesconection implements connectionint {

	public boolean iscardpresent(Card ref) {
		try {
			Class.forName("com.mysql.cj.jdbc.Driver");
			                                         
			
	  Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/fbsassignments", "root","#Ashutosh.snj79");
	
	  String query="select * from users where  username =?";
			PreparedStatement pstm=con.prepareStatement(query);
			 
			pstm.setString(1,ref.getName());
			ResultSet rs=pstm.executeQuery();
			return rs.next();
		} catch (ClassNotFoundException e) {
			e.printStackTrace();
		} catch (SQLException e) {
			e.printStackTrace();
		}
		return false;
		
	}

	public boolean isvalid(Card ref) {
		  return iscardpresent(ref);
	}
}
