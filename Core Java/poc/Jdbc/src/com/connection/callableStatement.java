package com.connection;

import java.sql.CallableStatement;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.Scanner;

public class callableStatement {
  public static void main(String [] args) {
	  Scanner sc=new Scanner(System.in);
	    try {
			Class.forName("com.mysql.cj.jdbc.Driver");
			Connection connect=DriverManager.getConnection("jdbc:mysql://localhost:3306/fbsassignments", "root","#Ashutosh.snj79");
			String Quer="call GetEmployeeDetails(?)";
			CallableStatement str=connect.prepareCall(Quer);
			System.out.println("Enter the Empno = ");
			int no=sc.nextInt();
			str.setInt(1,no);
			ResultSet result=str.executeQuery();
			while (result.next()) {
				// FIRST_NAME | LAST_NAME | EMAIL 
				System.out.println(result.getInt("EMPLOYEE_ID"));
				System.out.println(result.getString("FIRST_NAME"));
				System.out.println(result.getString("LAST_NAME"));
			}
			
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
  }
}
/* 1. IN Parameter Example
Stored Procedure Definition (SQL):
This procedure takes an employee ID as an input (IN) parameter and retrieves the employee's details.

DELIMITER //
CREATE PROCEDURE getEmployeeById(IN emp_id INT)
BEGIN
    SELECT id, name, department FROM employees WHERE id = emp_id;
END //
DELIMITER ;

import java.sql.*;

public class InParameterExample {
    public static void main(String[] args) {
        String url = "jdbc:mysql://localhost:3306/your_database";
        String user = "root";
        String password = "password";

        try (Connection connection = DriverManager.getConnection(url, user, password)) {
            // Prepare the callable statement
            CallableStatement cstmt = connection.prepareCall("{CALL getEmployeeById(?)}");
            cstmt.setInt(1, 101); // Input parameter (emp_id)

            // Execute and process the results
            ResultSet rs = cstmt.executeQuery();
            while (rs.next()) {
                System.out.println("ID: " + rs.getInt("id") +
                                   ", Name: " + rs.getString("name") +
                                   ", Department: " + rs.getString("department"));
            }
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }
}
============================================================================

2. OUT Parameter Example
Stored Procedure Definition (SQL):
This procedure takes an employee ID as an input and returns the employee's name as an output (OUT) parameter.

sql
Copy code

DELIMITER //
CREATE PROCEDURE getEmployeeName(IN emp_id INT, OUT emp_name VARCHAR(50))
BEGIN
    SELECT name INTO emp_name FROM employees WHERE id = emp_id;
END //
DELIMITER ;

import java.sql.*;

public class OutParameterExample {
    public static void main(String[] args) {
        String url = "jdbc:mysql://localhost:3306/your_database";
        String user = "root";
        String password = "password";

        try (Connection connection = DriverManager.getConnection(url, user, password)) {
            // Prepare the callable statement
            CallableStatement cstmt = connection.prepareCall("{CALL getEmployeeName(?, ?)}");
            cstmt.setInt(1, 101); // Input parameter (emp_id)
            cstmt.registerOutParameter(2, Types.VARCHAR); // Register output parameter (emp_name)

            // Execute the callable statement
            cstmt.execute();

            // Retrieve the output parameter value
            String employeeName = cstmt.getString(2);
            System.out.println("Employee Name: " + employeeName);
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }
}
========================================================================

3. INOUT Parameter Example
Stored Procedure Definition (SQL):
This procedure takes a number as an input and increments it by 10, returning the result as an output (INOUT) parameter.

sql
Copy code

DELIMITER //
CREATE PROCEDURE incrementValue(INOUT num INT)
BEGIN
    SET num = num + 10;
END //
DELIMITER ;

import java.sql.*;

public class InOutParameterExample {
    public static void main(String[] args) {
        String url = "jdbc:mysql://localhost:3306/your_database";
        String user = "root";
        String password = "password";

        try (Connection connection = DriverManager.getConnection(url, user, password)) {
            // Prepare the callable statement
            CallableStatement cstmt = connection.prepareCall("{CALL updateSalary(?)}");
            cstmt.setBigDecimal(1, new java.math.BigDecimal("45000.00")); // Initial salary
            cstmt.registerOutParameter(1, Types.DECIMAL); // Register same parameter as OUT

            // Execute the callable statement
            cstmt.execute();

            // Retrieve the updated salary
            java.math.BigDecimal updatedSalary = cstmt.getBigDecimal(1);
            System.out.println("Updated Salary: " + updatedSalary);
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }
}

IN Parameter Example: Passes an employee ID to retrieve their details.
OUT Parameter Example: Passes an employee ID and retrieves their name as an output.
INOUT Parameter Example: Modifies a salary value and returns the updated value
*/

