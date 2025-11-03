#include<stdio.h>
void CheckEvenOdd(int num)
{
    int i = 0;

    i = num % 2;

    if(i == 0)
    {
        printf("It is even number");
    }
    else
    {
        printf("It is not even number");
    }
}

int main()
{
    int number;

    printf("ENter number \n");
    scanf("%d", &number);

    CheckEvenOdd(number);

    return 0;
}