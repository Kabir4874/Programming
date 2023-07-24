package Learning_Java;
class negatvieRadius extends Exception{
    @Override
    public String toString() {
        return "Radius cannot be negative";
    }

    @Override
    public String getMessage() {
        return "Radius cannot be negative";
    }
}
public class L84 {
    public static double area(int r) throws negatvieRadius
    {
        if(r<0)
        {
            throw new  negatvieRadius();
        }
        double result= Math.PI* r*r;
        return result;
    }
    public static int divide(int a, int b) throws ArithmeticException{
        int result = a/b;
        return result;
    }
    public static void main(String[] args) {
            try {
//                int c= divide(6,0);
//                System.out.println(c);
                double n= area(6);
                System.out.println(n);
            }
            catch (Exception e){
                System.out.println("Exception");
            }
    }
}
