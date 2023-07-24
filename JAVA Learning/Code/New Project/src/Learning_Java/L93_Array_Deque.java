package Learning_Java;

import java.util.ArrayDeque;

public class L93_Array_Deque {
    public static void main(String[] args) {
        ArrayDeque<Integer> adq= new ArrayDeque<>();
        adq.add(3);
        adq.add(4);
        adq.add(5);
        System.out.println(adq.getFirst());
        System.out.println(adq.getLast());
    }
}
