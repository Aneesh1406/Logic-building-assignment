#include<stdio.h>

void StrCpyRev(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'a' && *src <= 'z')
        {
            *src = *src - 32;
            *dest = *src;
        }
        else
        {
            *dest = *src;

        }
        dest++;
        src++;
    }
    *dest = '\0';
        
}

int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30];

    StrCpyRev(arr, brr);

    printf("%s", brr);

    return 0;
}