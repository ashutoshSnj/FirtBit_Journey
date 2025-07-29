import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class jdbcConnecton {
   public static void main(String[] args) {
	try(Connection connect=DriverManager.getConnection("jdbc:mysql://localhost:3306/fbs","root","#Ashutosh.snj79");
			PreparedStatement stm=connect.prepareStatement("select * from user where user=?");)
	       
	  {
		   stm.setString(1, "Ashutosh");
		   try( ResultSet set=stm.executeQuery()){
		   
		while (set.next()) {
			System.out.println(set.getString(1)+" "+ set.getString(2));		
		}
		   }
	    
	} catch (SQLException e) {
		// TODO Auto-generated catch block
		e.printStackTrace();
	}
	
}
}
