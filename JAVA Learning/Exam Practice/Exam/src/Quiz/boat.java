package Quiz;

public class boat extends vehicle{
    public void move(){
        System.out.println("Cars Move Faster");
    }
    public static void main(String[]args){
       boat b1= new boat();
       b1.move();
    }
}
