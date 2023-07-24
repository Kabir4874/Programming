package Quiz;

public class car extends vehicle {
    public void move(){
        System.out.println("Cars Move Faster");
    }
    public static void main(String[]args){
        car c1= new car();
        c1.move();
        c1.carry();
    }
}