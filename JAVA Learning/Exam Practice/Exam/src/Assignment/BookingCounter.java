package Assignment;

import java.sql.Time;
import java.util.Date;

public class BookingCounter {
    public void display(){
        System.out.println("Welcome To Our Ticket Counter");
    }
    public static void main(String[] args) {
        BookingCounter d= new BookingCounter();
        d.display();
        Agent ag= new Agent(564, "Rakib");
        Ticket tic= new Ticket("123",new Date(),new Time(24), "Ab", "Agent", "Khulna" );
        Ticket tic2= new Ticket("1234",new Date(),new Time(30), "BK", "Agent", "Pabna" );
        Refund ref1= new Refund("4874", 500);
        Refund ref2= new Refund("4546984", 900);

        Student stu= new Student("4874","4th", ref1, tic, "Kabir", 21, "Mirpur", ag);
        Teacher teacher= new Teacher("AAB","4546984", ref2, tic2, "Rahim", 30,"Ashulia",ag);
        stu.StudentDisplay();
        System.out.println("\n");
        teacher.TeacherDisplay();
    }
}




































