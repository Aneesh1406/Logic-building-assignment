#include<stdio.h>

int Fact(int ino)
{
    int ifact = 0;
    int icnt = 0;

    ifact = 1;

    for(icnt = 1; icnt <= ino; icnt++)
    {
        ifact = ifact * icnt;
    }

    return ifact;
}

int main()
{
    int iRet = 0;
    int ivalue = 0;
    
    printf("Enter the number :");
    scanf("%d", &ivalue);

    iRet = Fact(ivalue);

    printf("%d", iRet);

    return 0;
}