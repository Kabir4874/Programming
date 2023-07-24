#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("One\n");
        printf("6th Position in CODE.\n");
        break;
    case 2:
        printf("Two\n");
        printf("4th Position in CODE.\n");
        break;
    case 3:
        printf("Three\n");
        printf("5th Position in CODE.\n");
        break;
    case 4:
        printf("Four\n");
        printf("3th Position in CODE.\n");
        break;
    case 5:
        printf("Five\n");
        printf("1th Position in CODE.\n");
        break;
    case 6:
        printf("Six\n");
        printf("2th Position in CODE.\n");
        break;
    case 7:
        printf("Seven\n");
        printf("10th Position in CODE.\n");
        break;
    case 8:
        printf("Eight\n");
        printf("9th Position in CODE.\n");
        break;
    case 9:
        printf("Nine\n");
        printf("8th Position in CODE.\n");
        break;
    case 0:
        printf("Zero\n");
        printf("7th Position in CODE.\n");
        break;
    default:
        printf("Out of the Range\n");
    }
    return 0;
}