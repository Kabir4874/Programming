package Learning_Java;
interface bicycle {
    void brake(int decrement);

    void speedUp(int increment);
}

class cycle implements bicycle {
    public void brake(int decrement) {
        System.out.println("Applying Brake");
    }

    public void speedUp(int increment) {
        System.out.println("Applying Speedup");
    }
}

public class L55_interfaces {
    public static void main(String[] args) {

    }
}
