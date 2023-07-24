#include <stdio.h>
struct data
{
    char ch[20];
    int an;
    double balance;
};
void customer(struct data *arr)
{
    if (arr->balance < 200)
    {
        printf("%s\n", arr->ch);
    }
}
void customer2(struct data *arr)
{
    if (arr->balance > 1000)
    {

        printf("%lf\n", arr->balance);
    }
}

int main()
{
    struct data arr[3], arr2[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        scanf("%s", &arr[i].ch);
        scanf("%d", &arr[i].an);
        scanf("%lf", &arr[i].balance);
    }
    for (i = 0; i < 3; i++)
    {
        customer(&arr[i]);
    }
    for (i = 0; i < 3; i++)
    {
        customer2(&arr[i]);
    }

    return 0;
}