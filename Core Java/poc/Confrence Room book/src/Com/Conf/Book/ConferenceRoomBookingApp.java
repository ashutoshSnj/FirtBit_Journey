package Com.Conf.Book;


import java.sql.*;
import java.time.LocalDate;
import java.time.LocalTime;
import java.util.InputMismatchException;
import java.util.Scanner;

public class ConferenceRoomBookingApp {
    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        while (true) {
            System.out.println("\n--- Conference Room Booking System ---");
            System.out.println("1. Add Conference Room");
            System.out.println("2. Remove Conference Room");
            System.out.println("3. Book Conference Room");
            System.out.println("4. Cancel Booking");
            System.out.println("5. Print Daily Timetable");
            System.out.println("6. View Weekly Timetable");
            System.out.println("7. Exit");
            System.out.print("Enter your choice: ");

            try {
                int choice = scanner.nextInt();
                scanner.nextLine();

                switch (choice) {
                    case 1 -> addConferenceRoom();
                    case 2 -> removeConferenceRoom();
                    case 3 -> bookConferenceRoom();
                    case 4 -> cancelBooking();
                    case 5 -> printDailyTimetable();
                    case 6 -> viewWeeklyTimetable();
                    case 7 -> {
                        System.out.println("Exiting... Goodbye!");
                        System.exit(0);
                    }
                    default -> System.out.println("Invalid choice! Please enter a valid option.");
                }
            } catch (InputMismatchException e) {
                System.out.println("Invalid input! Please enter a number.");
                scanner.nextLine();
            }
        }
    }

    private static void addConferenceRoom() {
        System.out.print("\nEnter room name: ");
        String roomName = scanner.nextLine();
        System.out.print("Enter room capacity: ");
        int capacity = scanner.nextInt();
        scanner.nextLine();

        try (Connection conn = DatabaseConnection.getConnection()) {
            String query = "INSERT INTO ConferenceRooms (room_name, capacity) VALUES (?, ?)";
            PreparedStatement stmt = conn.prepareStatement(query);
            stmt.setString(1, roomName);
            stmt.setInt(2, capacity);
            stmt.executeUpdate();
            System.out.println("Conference room added successfully!");
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    private static void removeConferenceRoom() {
        System.out.print("Enter room ID to remove: ");
        int roomId = scanner.nextInt();
        scanner.nextLine();

        try (Connection conn = DatabaseConnection.getConnection()) {
            String query = "DELETE FROM ConferenceRooms WHERE room_id = ?";
            PreparedStatement stmt = conn.prepareStatement(query);
            stmt.setInt(1, roomId);
            int rowsDeleted = stmt.executeUpdate();
            System.out.println(rowsDeleted > 0 ? "Conference room removed successfully!" : "Room not found!");
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    private static void bookConferenceRoom() {
        try {
            System.out.print("Enter user ID: ");
            int userId = scanner.nextInt();
            System.out.print("Enter room ID: ");
            int roomId = scanner.nextInt();
            scanner.nextLine();

            System.out.print("Enter booking date (YYYY-MM-DD): ");
            LocalDate bookingDate = LocalDate.parse(scanner.nextLine());
            System.out.print("Enter start time (HH:MM): ");
            LocalTime startTime = LocalTime.parse(scanner.nextLine());
            System.out.print("Enter end time (HH:MM): ");
            LocalTime endTime = LocalTime.parse(scanner.nextLine());

            if (endTime.isBefore(startTime)) {
                System.out.println("Error: End time must be after start time.");
                return;
            }

            try (Connection conn = DatabaseConnection.getConnection()) {
                String checkQuery = "SELECT * FROM Bookings WHERE room_id = ? AND booking_date = ? " +
                        "AND ((start_time < ? AND end_time > ?) OR (start_time < ? AND end_time > ?) OR " +
                        "(start_time >= ? AND end_time <= ?))";
                PreparedStatement checkStmt = conn.prepareStatement(checkQuery);
                checkStmt.setInt(1, roomId);
                checkStmt.setDate(2, Date.valueOf(bookingDate));
                checkStmt.setTime(3, Time.valueOf(endTime));
                checkStmt.setTime(4, Time.valueOf(startTime));
                checkStmt.setTime(5, Time.valueOf(endTime));
                checkStmt.setTime(6, Time.valueOf(startTime));
                checkStmt.setTime(7, Time.valueOf(startTime));
                checkStmt.setTime(8, Time.valueOf(endTime));

                ResultSet rs = checkStmt.executeQuery();
                if (rs.next()) {
                    System.out.println("Error: Room is already booked for the given time slot!");
                    return;
                }

                String insertQuery = "INSERT INTO Bookings (user_id, room_id, booking_date, start_time, end_time, status) " +
                        "VALUES (?, ?, ?, ?, ?, 'CONFIRMED')";
                PreparedStatement insertStmt = conn.prepareStatement(insertQuery);
                insertStmt.setInt(1, userId);
                insertStmt.setInt(2, roomId);
                insertStmt.setDate(3, Date.valueOf(bookingDate));
                insertStmt.setTime(4, Time.valueOf(startTime));
                insertStmt.setTime(5, Time.valueOf(endTime));
                insertStmt.executeUpdate();
                System.out.println("Room booked successfully!");
            }
        } catch (Exception e) {
            System.out.println("Invalid input! Please enter correct values.");
            scanner.nextLine();
        }
    }

    private static void cancelBooking() {
        System.out.print("Enter booking ID to cancel: ");
        int bookingId = scanner.nextInt();
        scanner.nextLine();

        try (Connection conn = DatabaseConnection.getConnection()) {
            String query = "DELETE FROM Bookings WHERE booking_id = ?";
            PreparedStatement stmt = conn.prepareStatement(query);
            stmt.setInt(1, bookingId);
            int rowsDeleted = stmt.executeUpdate();
            System.out.println(rowsDeleted > 0 ? "Booking cancelled successfully!" : "Booking not found!");
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    private static void printDailyTimetable() {
        System.out.print("Enter date (YYYY-MM-DD): ");
        LocalDate date = LocalDate.parse(scanner.nextLine());

        try (Connection conn = DatabaseConnection.getConnection()) {
            String query = "SELECT room_id, user_id, start_time, end_time, status " +
                    "FROM Bookings WHERE booking_date = ? ORDER BY start_time";
            PreparedStatement stmt = conn.prepareStatement(query);
            stmt.setDate(1, Date.valueOf(date));
            ResultSet rs = stmt.executeQuery();

            System.out.println("\n--- Daily Timetable for " + date + " ---");
            boolean hasBookings = false;
            while (rs.next()) {
                hasBookings = true;
                System.out.println("Room ID: " + rs.getInt("room_id") +
                        " | User ID: " + rs.getInt("user_id") +
                        " | Time: " + rs.getTime("start_time") + " - " + rs.getTime("end_time") +
                        " | Status: " + rs.getString("status"));
            }
            if (!hasBookings) {
                System.out.println("No bookings found for the selected date.");
            }
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    private static void viewWeeklyTimetable() {
        LocalDate today = LocalDate.now();
        LocalDate endDate = today.plusDays(7);

        try (Connection conn = DatabaseConnection.getConnection()) {
            String query = "SELECT booking_date, room_id, user_id, start_time, end_time, status " +
                    "FROM Bookings WHERE booking_date BETWEEN ? AND ? ORDER BY booking_date, start_time";
            PreparedStatement stmt = conn.prepareStatement(query);
            stmt.setDate(1, Date.valueOf(today));
            stmt.setDate(2, Date.valueOf(endDate));
            ResultSet rs = stmt.executeQuery();

            System.out.println("\n--- Weekly Timetable ---");
            boolean hasBookings = false;
            while (rs.next()) {
                hasBookings = true;
                System.out.println("Date: " + rs.getDate("booking_date") +
                        " | Room ID: " + rs.getInt("room_id") +
                        " | User ID: " + rs.getInt("user_id") +
                        " | Time: " + rs.getTime("start_time") + " - " + rs.getTime("end_time") +
                        " | Status: " + rs.getString("status"));
            }
            if (!hasBookings) {
                System.out.println("No bookings found for the next 7 days.");
            }
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }
}