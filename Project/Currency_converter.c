#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float convert(int country1, float amount, int country2)
{
    float arr[50] = {0.31, 0.38, 0.39, 0.71, 0.86, 0.83, 0.87, 1.01, 1.00, 1.00, 1.36, 1.41, 1.56, 4.97, 1.41, 1.72,
                     2.30, 5.29, 3.53, 18.59, 7.85, 10.94, 18.14, 61.53, 82.29, 1.96, 7.28, 37.97, 414.55, 10.33, 19.82, 7.48,
                     4.72, 4.75, 58.11, 15557.30, 24.65, 3.67, 32.11, 156.34, 943.40, 23.20, 4.94, 3.76, 221.38, 4835.01, 1460.00,
                     1.97, 10.86, 7.56};
    float usd = amount / arr[country1 - 1];
    float final = usd * arr[country2 - 1];
    return final;
}
int main()
{
    FILE *fp;
    char s[50][30] =
        {
            "Kuwait Dinar",
            "Bahraini Dinar",
            "Oman Rial",
            "Jordanian Dinar",
            "Pound Sterling",
            "Cayman Islands Dollar",
            "Gibraltar Pound",
            "Euro",
            "Swiss Franc",
            "US Dollar",
            "Canadian Dollar",
            "Brunei Dollar",
            "Australian Dollar",
            "Libyan Dinar",
            "Singapore Dollar",
            "New Zealand Dollar",
            "Fijian Dollar",
            "Brazilian Real Currency",
            "Israeli New Shekel",
            "Turkish lira",
            "Hong Kong Dollar",
            "Swedish Krona",
            "South African Rand",
            "Russian Ruble",
            "Indian Rupee",
            "Bulgarian Lev",
            "Chinese Yuan Renminbi",
            "Thailand Baht",
            "Hungarian Forint",
            "Norwegian Krone",
            "Mexican Peso",
            "Danish Krone",
            "Malaysian Ringgit",
            "Poland Zloty",
            "Philippine peso",
            "Indonesian Rupiah",
            "Czech Koruna",
            "UAE Dirham",
            "New Taiwan Dollar",
            "Argentine Peso",
            "Chilean Peso",
            "Egyptian Pound",
            "Romanian Leu",
            "Saudi Riyal",
            "Pakistani Rupee",
            "Colombian Peso",
            "Iraqi Dinar",
            "Bosnia Convertible Mark",
            "Moroccan Dirham",
            "Croatian Kuna"};
    while (1)
    {
        system("cls");
        int ex;
        printf("                                ==================================================\n");
        printf("                                ||         * * * * * * * * * * * * * * *        ||\n");
        printf("                                ||       * * * * * * * * * * * * * * * * *      ||\n");
        printf("                                ||     * *                               * *    ||\n");
        printf("                                ||   * *         Currency Converter        * *  ||\n");
        printf("                                ||     * *                               * *    ||\n");
        printf("                                ||       * * * * * * * * * * * * * * * * *      ||\n");
        printf("                                ||         * * * * * * * * * * * * * * *        ||\n");
        printf("                                ==================================================\n");
        printf("\n");
        printf("\n");
        int x;
        printf("1.Convert Currency\n");
        printf("2.Read File(History)\n");
        printf("0.Exit\n");
        printf("\n                 *******************************************************************************\n\n");
        printf("                                        Enter Your Option(Enter 0 to EXIT)\n");
        printf("The Option is: ");
        scanf("%d", &x);
        printf("\n");
        printf("\n");
        if (x == 1)
        {
            fp = fopen("test.txt", "w");
            while (1)
            {
                system("cls");
                printf("                                ==================================================\n");
                printf("                                ||         * * * * * * * * * * * * * * *        ||\n");
                printf("                                ||       * * * * * * * * * * * * * * * * *      ||\n");
                printf("                                ||     * *                               * *    ||\n");
                printf("                                ||   * *         Currency Converter        * *  ||\n");
                printf("                                ||     * *                               * *    ||\n");
                printf("                                ||       * * * * * * * * * * * * * * * * *      ||\n");
                printf("                                ||         * * * * * * * * * * * * * * *        ||\n");
                printf("                                ==================================================\n");
                printf("\n");
                printf("\n");
                printf("\n                 *******************************************************************************\n\n");
                printf("1.Kuwait Dinar                                                            26.Bulgarian Lev\n");
                printf("2.Bahraini Dinar                                                          27.Chinese Yuan Renminbi\n");
                printf("3.Oman Rial                                                               28.Thailand Baht\n");
                printf("4.Jordanian Dinar                                                         29.Hungary Forint\n");
                printf("5.Pound Sterling                                                          30.Norwegian Krone\n");
                printf("6.Cayman Islands Dollar                                                   31.Mexican Peso\n");
                printf("7.Gibraltar Pound                                                         32.Danish Krone\n");
                printf("8.Euro                                                                    33.Malaysian Ringgit\n");
                printf("9.Swiss Franc                                                             34.Poland Zloty\n");
                printf("10.US Dollar                                                              35.Philippine Peso\n");
                printf("11.Canadian Dollar                                                        36.Indonesia Rupiah\n");
                printf("12.Brunei Dollar                                                          37.Czech Koruna\n");
                printf("13.Australian Dollar                                                      38.UAE Dirham\n");
                printf("14.Libyan Dinar                                                           39.Taiwan New Dollar\n");
                printf("15.Singapore Dollar                                                       40.Argentine Peso\n");
                printf("16.New Zealand Dollar                                                     41.Chilean Peso\n");
                printf("17.Fijian Dollar                                                          42.Egyptian Pound\n");
                printf("18.Brazilian Real                                                         43.Romanian Leu\n");
                printf("19.Israel New Shekel                                                      44.Saudi Riyal\n");
                printf("20.Turkish Lira                                                           45.Pakistan Rupee\n");
                printf("21.Hong Kong Dollar                                                       46.Colombian Peso	\n");
                printf("22.Swedish Krona                                                          47.Iraqi Dinar\n");
                printf("23.South African Rand                                                     48.Bosnia Convertible Mark\n");
                printf("24.Russian Ruble                                                          49.Moroccan Dirham\n");
                printf("25.Indian Rupee                                                           50.Croatian Kuna\n");
                printf("\n");
                printf("\n                 *******************************************************************************\n\n");
                printf("Enter the number of the Currency type you want to convert: ");
                int a, b;
                float p;
                char ch[30], ch2[30];
                scanf("%d", &a);
                if (a >= 1 && a <= 50)
                {
                    printf("\n");
                    printf("\n                 *******************************************************************************\n\n");
                    printf("You choose \"%s\" Currency type.\n", s[a - 1]);
                    printf("\n                 *******************************************************************************\n\n");
                    while (1)
                    {
                        printf("Enter the number of the currency type you want to convert \"%s\" into: ", s[a - 1]);
                        scanf("%d", &b);
                        if (b >= 1 && b <= 50)
                        {
                            break;
                        }
                        printf("\n\nWrong Input\n\n\n");
                    }
                    printf("\n");
                    printf("\n                 *******************************************************************************\n\n");
                    printf("You choose \"%s\" Currency type.\n", s[b - 1]);
                    printf("\n                 *******************************************************************************\n\n");
                    printf("Enter how many \"%s\" you want to convert into \"%s\": ", s[a - 1], s[b - 1]);
                    scanf("%f", &p);
                    printf("\n                 *******************************************************************************\n\n");
                    float x = convert(a, p, b);
                    printf("%.2f \"%s\" = %.2f \"%s\"\n", p, s[a - 1], x, s[b - 1]);
                    printf("\n\nDATE: %s\t\t\tTIME: %s\n\n", __DATE__, __TIME__);
                    fp = fopen("test.txt", "a");
                    fprintf(fp, "%.2f \"%s\" = %.2f \"%s\"\n", p, s[a - 1], x, s[b - 1]);
                    fprintf(fp, "DATE: %s\t\t\tTIME: %s\n\n", __DATE__, __TIME__);
                    fclose(fp);
                    printf("\n                 *******************************************************************************\n\n");
                    printf("\t                                       You Want To Exit?\n\n Press (Yes=1/No=2): ");
                    scanf("%d", &ex);
                    if (ex == 1)
                    {
                        break;
                    }
                }
                else
                {
                    printf("Wrong Input\n");
                }
            }
        }
        else if (x == 0)
        {
            break;
        }
        else if (x == 2)
        {
            system("cls");
            int z;
            char ch;
            fp = fopen("test.txt", "r");
            while (!feof(fp))
            {
                ch = fgetc(fp);
                printf("%c", ch);
            }
            fclose(fp);
            printf("\n                 *******************************************************************************\n\n");
            printf("\t                                       Enter Any Number To Exit!\n\n Press: ");
            scanf("%d", &z);
            if (z)
            {
                continue;
            }
        }
    }
    system("cls");
    printf("                                ==================================================\n");
    printf("                                ||         * * * * * * * * * * * * * * *        ||\n");
    printf("                                ||       * * * * * * * * * * * * * * * * *      ||\n");
    printf("                                ||     * *                               * *    ||\n");
    printf("                                ||   * *         Currency Converter        * *  ||\n");
    printf("                                ||     * *                               * *    ||\n");
    printf("                                ||       * * * * * * * * * * * * * * * * *      ||\n");
    printf("                                ||         * * * * * * * * * * * * * * *        ||\n");
    printf("                                ==================================================\n");
    printf("\n");
    printf("This Code Is Created By:\n");
    printf("1.Kabir Ahmed Ridoy\n");
    printf("2.Abid Khan\n");
    printf("3.Rokshana Talukder Ratri\n");
    printf("4.Didarul Islam Shaon\n");
    printf("\n\n\t\t\t\t\t\t ||THANK YOU||\n");
    return 0;
}