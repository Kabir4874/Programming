#include <stdio.h>
struct Scientist
{
    char name[10];
    float age;
    int num;
};

int main()
{
    struct Scientist sntst1, sntst2;
    gets(sntst1.name);
    scanf("%f", &sntst1.age);
    scanf("%d", &sntst1.num);
    getchar();
    gets(sntst2.name);
    scanf("%f", &sntst2.age);
    scanf("%d", &sntst2.num);
    puts(sntst1.name);
    printf("%f\n", sntst1.age);
    printf("%d\n", sntst1.num);
    puts(sntst2.name);
    printf("%f\n", sntst2.age);
    printf("%d\n", sntst2.num);

    return 0;
}