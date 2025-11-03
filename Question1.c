#include<stdio.h>

void PrintEven(int iNo)
{

    int icnt = 0;
    int iValue = 2;

    if(iNo <= 0)
    {
        return;
    }

    while(icnt < iNo)
    {
        printf("%d\t", iValue);
        icnt++;
        iValue = iValue+2;
    }

}
int main()
{

    int iValue = 0;
    printf("enter the number\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}