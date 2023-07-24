package _4_a;

public class Banana extends Fruits{
    public String color;

    public Banana(String color) {
        this.color = color;
    }

    public void display(){
        System.out.println("Banana");
        System.out.println(color);
    }
}
