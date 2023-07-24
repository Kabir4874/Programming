package Learning_Java;
class t1 implements Runnable{
@Override
public void run(){
        System.out.println("Thread is running");
        }
        }
public class L71 {
    public static void main(String[] args) {
        t1 obj1 = new t1();
        Thread t = new Thread(obj1);
        t.start();
    }
}
