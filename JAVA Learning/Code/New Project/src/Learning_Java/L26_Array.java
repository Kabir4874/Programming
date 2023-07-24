package Learning_Java;
import java.util.Scanner;
public class L26_Array {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
//        int [] marks= new int[5];
        int [] marks;
        marks= new int[5];
        for(int i=0; i<5; i++)
        {
            marks[i] = sc.nextInt();
        }
        for(int i=0; i<5; i++)
        {
            System.out.println(marks[i]);
        }
        int [] arr= {1,2,3,4};
        System.out.println(arr.length);
        for(int element: marks)
        {
            System.out.println(element);
        }





    }
}
