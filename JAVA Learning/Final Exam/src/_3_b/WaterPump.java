package _3_b;

public class WaterPump implements Machine{
    @Override
    public void start() {
        System.out.println("WaterPump Start");
    }

    @Override
    public void stop() {
        System.out.println("WaterPump Stop");
    }
}
