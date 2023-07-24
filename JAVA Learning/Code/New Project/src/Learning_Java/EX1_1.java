package Learning_Java;
import java.util.Scanner;
public class EX1_1 {
    public static void main(String[] args) {
        float a,b,c,d,e;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter first sub number:");
        a= sc.nextFloat();
        System.out.println("Enter second sub number:");
        b= sc.nextFloat();
        System.out.println("Enter third sub number:");
        c= sc.nextFloat();
        System.out.println("Enter fourth sub number:");
        d= sc.nextFloat();
        System.out.println("Enter fifth sub number:");
        e= sc.nextFloat();
        float sum = a+b+c+d+e;
        float result = (100*sum)/500;
        System.out.print("The percentage is: "+result);
        System.out.print("%");


    }
}
