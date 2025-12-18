#include<stdio.h>

void StrRevX(char *str)
{
    char *start = str;
    char *end = str;

    while(*end != '\0')
    {
        end++;
    }

    end--;

    char temp = '\0';

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the string :");
    scanf("%[^'\n']s", arr);

    StrRevX(arr);

    printf("Reverse string is : %s", arr);


    return 0;
}