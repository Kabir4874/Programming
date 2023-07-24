package _3_b;

public class Car implements Machine{
    @Override
    public void start() {
        System.out.println("Car Start");
    }

    @Override
    public void stop() {
        System.out.println("Car Stop");
    }
}
