package Learning_Java;

import java.util.Scanner;

public class L31_methods {
    static int logic(int x, int y) {

        int z;
        if (x > y) {
            z = x + y;
        } else {
            z = (x + y) * 5;
        }
        return z;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b, c;
        a = sc.nextInt();
        b = sc.nextInt();
        c = logic(a, b);
        System.out.println(c);

    }
}
