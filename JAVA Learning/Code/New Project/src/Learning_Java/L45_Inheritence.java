package Learning_Java;
class Base{
    int x;

    public int getX() {
        return x;
    }

    public void setX(int x) {
        System.out.println("I am in Base and setting X now");
        this.x = x;
    }
    public void printMe(){
        System.out.println("I am a Constructor");
    }
}
class derived extends Base{
    int y;

    public int getY() {
        return y;
    }

    public void setY(int y) {
        this.y = y;
    }
}
public class L45_Inheritence {
    public static void main(String[] args) {

        Base b= new Base();
        b.setX(4);
        System.out.println(b.getX());
    }
}
