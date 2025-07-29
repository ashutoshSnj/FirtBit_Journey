package com.Ecom;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.List;

public class mysqldb implements Interface_all {

	
	@Override
	public boolean storedata(List<product> obj) {
		try {
			Class.forName("com.mysql.cj.jdbc.Driver");
			
			
	 Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/fbsassignments", "root","#Ashutosh.snj79");
			//productstr( id int, qua int);
    String query="insert into productstr values(?,?)";
   
	PreparedStatement pstm=con.prepareStatement(query);
	int i=0;
		for(i=0;i<obj.size();i++) {
			System.out.println("we call");
			pstm.setInt(1, obj.get(i).getId());
			pstm.setInt(1, obj.get(i).getQun());
			pstm.executeUpdate();	
		}
		
		if(i==obj.size()) {
			return true;
		}			
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return false;
	}
	
		
	

}
