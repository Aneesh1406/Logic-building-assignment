#include<stdio.h>

void CheckNumberType(int num)
{
    if(num > 0)
    {
        printf("It is positive number");
    }
    else if(num < 0)
    {
        printf("it is a negative number");
    }
    else
    {
        printf("It is a zero number");
    }
}

int main()
{
    int number;

    printf("ENter number : ");
    scanf("%d", &number);

    CheckNumberType(number);
    
    return 0;
}
