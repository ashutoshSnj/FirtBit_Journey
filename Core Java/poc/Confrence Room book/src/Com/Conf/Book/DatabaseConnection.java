package Com.Conf.Book;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class DatabaseConnection {

    private static Connection con;

    static {
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            con = DriverManager.getConnection("jdbc:mysql://localhost:3306/ConferenceRoom", "root", "Mahesh2001");
            System.out.println("Database connected successfully!");
        } catch (ClassNotFoundException e) {
            System.err.println("MySQL Driver not found.");
            e.printStackTrace();
        } catch (SQLException e) {
            System.err.println("Failed to connect to the database.");
            e.printStackTrace();
        }
    }

    public static Connection getConnection() {
        return con;
    }

    public static void main(String[] args) {
       
        getConnection();
    }
}