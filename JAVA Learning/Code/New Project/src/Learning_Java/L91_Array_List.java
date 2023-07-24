package Learning_Java;
import java.util.*;
public class L91_Array_List {
    public static void main(String[] args) {
        ArrayList<Integer> l1= new ArrayList<>();
        ArrayList<Integer> l2= new ArrayList<>();
        l2.add(32);
        l2.add(52);
        l2.add(42);
        l1.add(3);
        l1.add(4);
        l1.add(2);
        l1.add(5);
        l1.add(4);
        l1.add(4);
        l1.addAll(l2);
        System.out.println(l1.contains(8));
        System.out.println(l1.indexOf(1));
        System.out.println(l1.lastIndexOf(4));
        l1.set(1,50);
        for(int i=0; i<l1.size(); i++){
            System.out.print(l1.get(i));
            System.out.print(", ");
        }

    }
}
