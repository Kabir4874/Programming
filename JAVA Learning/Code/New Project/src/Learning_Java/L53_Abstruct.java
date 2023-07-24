package Learning_Java;
abstract class base1{
    public base1(){
        System.out.println("I am a constructor of Base1");
    }
    public void SayHello(){
        System.out.println("Hello");
    }
    abstract public void greet();
    abstract public void greet2();
}
class child extends base1{
    @Override
    public void greet(){
        System.out.println("Good morning");
    }
    @Override
    public void greet2(){
        System.out.println("Good morning");
    }
}
abstract class child2 extends base1{
    public void th(){
        System.out.println("I am good");
    }
}
public class L53_Abstruct {
    public static void main(String[] args) {
        child c= new child();

    }
}
