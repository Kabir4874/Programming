package Learning_Java;
import java.util.Scanner;

public class Ch1_PP2 {
    public static void main(String[] args) {
        float a, b, c, d, e;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter first sub number:");
        a = sc.nextFloat();
        System.out.println("Enter second sub number:");
        b = sc.nextFloat();
        System.out.println("Enter third sub number:");
        c = sc.nextFloat();
        float sum = a + b + c;
        float result = (100 * sum) / 300;
        System.out.print("The CGPA is: " + result);
        System.out.print("%");
        System.out.println(sum);
    }
}
