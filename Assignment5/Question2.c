#include<stdio.h>

int FindMax(int a, int b)
{
    if(a > b || b > a)
    {
        printf("It is a greater number");
    }
    else
    {
        printf("it is not grater number");
    }

}

int main()
{
    int num1, num2, reuslt;
    printf("ENter two numbers \n: ");
    scanf("%d %d", &num1, &num2);

    reuslt = FindMax(num1, num2);
    printf("Maximun number is : %d\n", reuslt);

    return 0;
}