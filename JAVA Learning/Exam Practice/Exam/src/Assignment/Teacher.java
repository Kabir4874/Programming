package Assignment;

public class Teacher extends Person{

    private String TeacherInitial;
    private String EmployeeId;
    Refund refund;
    public Ticket ticket;
    public Agent agent;
    public Teacher(String teacherInitial, String employeeId, Refund refund, Ticket ticket, String Name, int Age, String Address, Agent agent) {
        this.TeacherInitial = teacherInitial;
        this.EmployeeId = employeeId;
        this.refund = refund;
        this.ticket= ticket;
        setName(Name);
        setAge(Age);
        setAddress(Address);
        this.agent= agent;
    }
    public void TeacherDisplay(){
        System.out.println("Teacher Information: ");
        System.out.println(getName());
        System.out.println(getAge());
        System.out.println(getEmployeeId());
        System.out.println(getTeacherInitial());
        ticket.TicketDisplay();
        refund.RefundAmount();
        agent.AgentDisplay();
    }
    public String getTeacherInitial() {
        return TeacherInitial;
    }

    public void setTeacherInitial(String teacherInitial) {
        TeacherInitial = teacherInitial;
    }

    public String getEmployeeId() {
        return EmployeeId;
    }

    public void setEmployeeId(String employeeId) {
        EmployeeId = employeeId;
    }

    public Refund getRefund() {
        return refund;
    }

    public void setRefund(Refund refund) {
        this.refund = refund;
    }

    public void AddDetails(){
        System.out.println("Add Teacher Details");
    }
    public void ModifyDetails(){
        System.out.println("Modify Teacher Details");
    }
}
