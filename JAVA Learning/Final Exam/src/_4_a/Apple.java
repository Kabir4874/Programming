package _4_a;

public class Apple extends Fruits{
    public String color;

    public Apple(String color) {
        this.color = color;
    }

    public void display(){
        System.out.println("Apple");
        System.out.println(color);
    }
}
