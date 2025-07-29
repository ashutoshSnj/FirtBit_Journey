package Com.Conf.Book;

import java.time.LocalDate;
import java.time.LocalTime;

public class Booking {
    private int bookingId;
    private int userId;
    private int roomId;
    private LocalDate bookingDate;
    private LocalTime startTime;
    private LocalTime endTime;
    private String status;

    // Default constructor (for frameworks like Hibernate)
    public Booking() {}

    public Booking(int bookingId, int userId, int roomId, LocalDate bookingDate, LocalTime startTime, LocalTime endTime, String status) {
        this.bookingId = bookingId;
        this.userId = userId;
        this.roomId = roomId;
        this.bookingDate = bookingDate;
        setStartTime(startTime);
        setEndTime(endTime);
        setStatus(status);
    }

    public int getBookingId() {
        return bookingId;
    }

    public int getUserId() {
        return userId;
    }

    public int getRoomId() {
        return roomId;
    }

    public LocalDate getBookingDate() {
        return bookingDate;
    }

    public LocalTime getStartTime() {
        return startTime;
    }

    public LocalTime getEndTime() {
        return endTime;
    }

    public String getStatus() {
        return status;
    }

    public void setBookingId(int bookingId) {
        this.bookingId = bookingId;
    }

    public void setUserId(int userId) {
        this.userId = userId;
    }

    public void setRoomId(int roomId) {
        this.roomId = roomId;
    }

    public void setBookingDate(LocalDate bookingDate) {
        this.bookingDate = bookingDate;
    }

    public void setStartTime(LocalTime startTime) {
        if (endTime != null && startTime.isAfter(endTime)) {
            throw new IllegalArgumentException("Start time must be before end time.");
        }
        this.startTime = startTime;
    }

    public void setEndTime(LocalTime endTime) {
        if (startTime != null && endTime.isBefore(startTime)) {
            throw new IllegalArgumentException("End time must be after start time.");
        }
        this.endTime = endTime;
    }

    public void setStatus(String status) {
        if (!status.equalsIgnoreCase("Pending") && 
            !status.equalsIgnoreCase("Confirmed") && 
            !status.equalsIgnoreCase("Cancelled")) {
            throw new IllegalArgumentException("Invalid status. Allowed values: Pending, Confirmed, Cancelled.");
        }
        this.status = status;
    }
}