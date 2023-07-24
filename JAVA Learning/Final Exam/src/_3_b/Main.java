package _3_b;

public class Main {
    public static void main(String[] args) {
        Car c= new Car();
        WaterPump w= new WaterPump();

        c.start();
        c.stop();
        w.start();
        w.stop();
    }
}
