#include<stdio.h>

int Sum(int ino)
{
    int idig = 0;
    int isum = 0;

    while(ino != 0)
    {
        idig = ino % 10;
        ino = ino / 10;
        isum = isum + idig;
    }
    return isum;
}

int main()
{
    int ivalue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &ivalue);

    iRet = Sum(ivalue);

    printf("%d", iRet);

    return 0;
}