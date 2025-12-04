#include<stdio.h>

int Difference(char *str)
{
    int icnt1 = 0,  icnt2 = 0;
    int ifreq = 0;


    if(ifreq < 0)
    {
        ifreq = -ifreq;
    }
    

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            icnt1++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            icnt2++;
        }

        ifreq = icnt1 - icnt2;

        str++;
    }
    return ifreq;
}


int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String :");
    scanf("%[^'\n]s",arr);

    iRet = Difference(arr);

    printf("%d", iRet);

    return 0;
}