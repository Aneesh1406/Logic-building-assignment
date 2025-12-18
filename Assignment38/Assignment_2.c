#include<stdio.h>

void StrCpyRev(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src != ' ')
        {
            *dest = *src;
            dest++;
        }
        src++;

    }
        
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvel lous Pyth on";
    char brr[30];

    StrCpyRev(arr, brr);

    printf("%s", brr);

    return 0;
}