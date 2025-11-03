#include<stdio.h>

int FindLarget(int x, int y, int z)
{
    if( x > y || x > z)
    {
        printf("%d is a greater numebr\n",x);
        return x;
    }
    else if(y > x || y > z)
    {
        printf("%d is a greater number\n",y);
        return y;
    }
    else
    {
        printf("%d is a greater numeber\n",z);
        return z;
    }
}
int main()
{
    int a, b, c , result;
    printf("Enetr three numbers :");
    scanf("%d %d %d", &a, &b, &c);

    result = FindLarget(a, b, c);
    printf("Largest number is : %d", result);

    return 0;
}