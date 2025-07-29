
import java.sql.*;
import javax.sql.rowset.CachedRowSet;
import com.sun.rowset.CachedRowSetImpl;


public class OfflineConnection {
    public static void main(String[] args) throws Exception {
        // 🔌 Connect to DB
        Connection conn = DriverManager.getConnection(
                "jdbc:mysql://localhost:3306/fbs", "root", "#Ashutosh.snj79");

        // 📦 Create CachedRowSet (disconnected)
        CachedRowSet crs = new CachedRowSetImpl();

        // 🧾 Set the SQL query
        crs.setCommand("SELECT * FROM user");

        // 📥 Execute & Fill CachedRowSet
        crs.execute(conn); // Connection used here only once

        // 🔌 Disconnect DB
        conn.close();

        // 🧠 Work in memory (disconnected)
        while (crs.next()) {
            System.out.println("Username: " + crs.getString("username"));
            System.out.println("Password: " + crs.getString("password"));
        }
    }
}
