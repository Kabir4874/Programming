package Learning_Java;
import java.util.Scanner;
public class L33_VarArgs {
    static int sum(int ...arr)
    {
        int result =0;
        for(int a:arr){
            result+=a;
        }
        return result;
    }
    public static void main(String[] args) {

        System.out.println(sum(2,5,2,5,2,6,5));








    }
}
