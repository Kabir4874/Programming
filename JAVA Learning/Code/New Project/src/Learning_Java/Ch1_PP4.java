package Learning_Java;
import java.util.Scanner;
public class Ch1_PP4 {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter Kilometer:");
        float a= sc.nextFloat();
        float b= a*0.621371f;
        System.out.println("In Meter: "+b);
    }
}
