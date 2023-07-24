package Assignment;

public class Refund {
    private String Id;
    private double Amount;

    public Refund(String id, double amount) {
        Id = id;
        Amount = amount;
    }

    public String getId() {
        return Id;
    }

    public void setId(String id) {
        Id = id;
    }

    public double getAmount() {
        return Amount;
    }

    public void setAmount(double amount) {
        Amount = amount;
    }

    public void RefundAmount(){
        System.out.println("Refund Id: "+Id);
        System.out.println("Refund Amount: "+Amount);
    }
}
