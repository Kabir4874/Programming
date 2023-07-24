package Assignment;

public class Agent implements Function{
    private int AgentID;
    private String Name;
    public Ticket ticket;

    public Agent(int agentID, String name) {
        AgentID = agentID;
        Name = name;
    }

    @Override
    public void SearchTicket() {
        System.out.println("Search ticket");
    }
    @Override
    public void BookTicket() {
        System.out.println("Book ticket");
    }
    @Override
    public void CancelTicket() {
        System.out.println("Cancel ticket");
    }
    @Override
    public void MakePayment() {
        System.out.println("Make payment");
    }
    @Override
    public void FillDetails() {
        System.out.println("Fill details");
    }

    public int getAgentID() {
        return AgentID;
    }

    public void setAgentID(int agentID) {
        AgentID = agentID;
    }

    public String getName() {
        return Name;
    }

    public void setName(String name) {
        Name = name;
    }
    public void AgentDisplay(){
        System.out.println("Agent Information: ");
        System.out.println(getAgentID());
        System.out.println(getName());
    }
}
