package Assignment;

public class Student extends Person{
    private String StudentId;
    private String Semester;
    Refund refund;
    public Ticket ticket;
    public Agent agent;
    public Student(String studentId, String semester, Refund refund, Ticket ticket, String Name, int Age, String Address, Agent agent) {
        StudentId = studentId;
        Semester = semester;
        this.refund = refund;
        this.ticket= ticket;
        setName(Name);
        setAge(Age);
        setAddress(Address);
        this.agent= agent;
    }
    public void StudentDisplay(){
        System.out.println("Student Information: ");
        System.out.println(getName());
        System.out.println(getAge());
        System.out.println(getAddress());
        System.out.println(getStudentId());
        System.out.println(getSemester());
        ticket.TicketDisplay();
        refund.RefundAmount();
        agent.AgentDisplay();
    }
    public String getStudentId() {
        return StudentId;
    }

    public void setStudentId(String studentId) {
        StudentId = studentId;
    }

    public String getSemester() {
        return Semester;
    }

    public void setSemester(String semester) {
        Semester = semester;
    }

    public Refund getRefund() {
        return refund;
    }

    public void setRefund(Refund refund) {
        this.refund = refund;
    }

    public void AddDetails(){
        System.out.println("Details Added for Student");
    }
    public void MOdifyDetails(){
        System.out.println("Details Modifyed for Student");
    }
}
