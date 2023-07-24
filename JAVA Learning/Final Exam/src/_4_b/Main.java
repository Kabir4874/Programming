package _4_b;

public class Main {
    public static void main(String[] args) {
        BaseBall b= new BaseBall("BaseBall");
        Football f= new Football("FootBall");
        b.toss();
        b.bounce();
        f.toss();
        f.bounce();
    }
}
