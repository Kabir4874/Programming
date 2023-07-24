package Learning_Java;
class EkClass{
    int a;

    public int getA() {
        return a;
    }

    EkClass(int v){
        this.a=v;
    }
    public int returnOne(){
        return 1;
    }
}
class doClass extends EkClass{
    doClass(int c){
        super(c);
        System.out.println("I am a constructor");

    }
}
public class L47 {
    public static void main(String[] args) {
        EkClass e = new EkClass(5);
        doClass d= new doClass(65);
        System.out.println(e.getA());
    }
}
