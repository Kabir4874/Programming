package Learning_Java;
import java.util.Scanner;
public class L28_multidimantion_array {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int [][] flats;
        flats = new int[2][2];
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                flats[i][j]= sc.nextInt();
            }
        }for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                System.out.print(flats[i][j]);
                System.out.print(" ");
            }
            System.out.println();
        }







    }
}
