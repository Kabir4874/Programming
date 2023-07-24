package Learning_Java;
import java.util.Scanner;
public class L13_string {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        String name = new String("Harry");
        System.out.println(name);
        System.out.printf("The name is %s\n", name);
        String s = sc.nextLine();
        System.out.printf("%s", s);
    }
}
