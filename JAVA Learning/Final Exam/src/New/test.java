package New;

import java.util.Scanner;

public class test {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();
        int k = n * 2 - 1;
        for(int i=1; i<=n*2; i++)
        {

            for (int j = 1; j <= k; j++)
            {
                System.out.print("* ");
            }
            if (i % 2 == 0)
            {
                k -= 2;
            }
            System.out.println();
        }
    }

}
