package Learning_Java;
import java.util.Scanner;
public class L34_method_overloading {
    static void change(int [] arr){
        arr[0]= 32;
    }
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int [] arr={4,5,2,5};
        change(arr);
        System.out.println(arr[0]);

    }
}
