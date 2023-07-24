package Learning_Java;

import java.util.Scanner;

class MyExceptoin extends Exception{
    @Override
    public String toString() {
        return super.toString()+ "I am toString()";
    }

    @Override
    public String getMessage() {
        return super.getMessage()+"I am a getMessage()";
    }
}
class MaxAgeException extends Exception{
    @Override
    public String toString() {
        return "Age cannot be greater than 125";
    }

    @Override
    public String getMessage() {
        return "Make sure that the value of age entered is correct";
    }
}
public class L83 {
    public static void main(String[] args) {
        int a;
        Scanner sc= new Scanner(System.in);
        a= sc.nextInt();
        if(a<99)
        {
            try {
//                throw new  MyExceptoin();
                throw new ArithmeticException("This is an Exception");
            }
            catch (Exception e)
            {
                System.out.println(e.getMessage());
                System.out.println(e.toString());
                e.printStackTrace();
            }

        }
    }
}
