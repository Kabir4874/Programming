#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, nguess;
    srand(time(0));
    number = rand() % 100 + 1;
    // printf("The number is %d\n", number);

    do
    {
        printf("Guess The number between 1 and 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please\n");
        }
        else if (guess < number)
        {
            printf("higher number please\n");
        }
        else
        {
            printf("You guessed it in %d attemps", nguess);
        }
        nguess++;
    } while (guess != number);
    return 0;
}