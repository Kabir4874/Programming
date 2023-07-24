package Assignment;

import java.sql.Time;
import java.util.Date;

public class Ticket {
    private String TicketId;
    private Date Date;
    private Time Time;
    private String SeatNo;
    private String Source;
    private String Destination;


    public Ticket(String ticketId, java.util.Date date, java.sql.Time time, String seatNo, String source, String destination) {
        TicketId = ticketId;
        Date = date;
        Time = time;
        SeatNo = seatNo;
        Source = source;
        Destination = destination;
    }
    public void TicketDisplay(){
        System.out.println("Ticket Information: ");
        System.out.println(getTicketId());
        System.out.println(getDate());
        System.out.println(getTime());
        System.out.println(getSeatNo());
        System.out.println(getSource());
        System.out.println(getDestination());
    }
    public String getTicketId() {
        return TicketId;
    }

    public void setTicketId(String ticketId) {
        TicketId = ticketId;
    }

    public java.util.Date getDate() {
        return Date;
    }

    public void setDate(java.util.Date date) {
        Date = date;
    }

    public java.sql.Time getTime() {
        return Time;
    }

    public void setTime(java.sql.Time time) {
        Time = time;
    }

    public String getSeatNo() {
        return SeatNo;
    }

    public void setSeatNo(String seatNo) {
        SeatNo = seatNo;
    }

    public String getSource() {
        return Source;
    }

    public void setSource(String source) {
        Source = source;
    }

    public String getDestination() {
        return Destination;
    }

    public void setDestination(String destination) {
        Destination = destination;
    }
}
