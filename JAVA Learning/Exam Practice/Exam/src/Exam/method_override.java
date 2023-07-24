package Exam;
class A{
 int a;
    public int getA() {
        return a;
    }
A(int v)
{
this.a= v;
}
}
class B extends A{
B(int c)
{
super(c);
    System.out.println("I am a constructor");
}
}
public class method_override {
    public static void main(String[] args) {
 A a= new A(5);
 B b= new B(4);
    }
}
