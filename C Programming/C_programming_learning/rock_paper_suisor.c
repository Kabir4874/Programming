#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakeWaterGun(char you, char comp)
{
    if (you == comp)
    {
        return 0;
    }
    if (you == 's' && comp == 'p')
    {
        return 1;
    }
    else if (you == 'p' && comp == 's')
    {
        return -1;
    }

    if (you == 's' && comp == 'r')
    {
        return -1;
    }
    else if (you == 'r' && comp == 's')
    {
        return 1;
    }

    if (you == 'p' && comp == 'r')
    {
        return 1;
    }
    else if (you == 'r' && comp == 'p')
    {
        return -1;
    }
}
int main()
{
    char you, comp;
    srand(time(0));
    int number = rand() % 100 + 1;

    if (number < 33)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'r';
    }
    else
    {
        comp = 'p';
    }

    printf("Enter 'r' for Rock, 'p' for Paper and 's' for Scissor:\n");
    scanf("%c", &you);
    int result = snakeWaterGun(you, comp);
    if (result == 0)
    {
        printf("Game draw!\n");
    }
    else if (result == 1)
    {
        printf("You win!\n");
    }
    else
    {
        printf("You Lose!\n");
    }
    printf("You chose %c and computer chose %c. ", you, comp);
    return 0;
}