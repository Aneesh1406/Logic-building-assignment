#include<stdio.h>

void Reverse(char *str)
{
    char *start = str;
    char *end = str;

    char temp = '\0';

    while(*end != '\0')
    {
        end++;
    }
    end--;

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
    int iRet = 0;

    printf("Enter String :");
    scanf("%[^'\n']s", arr);

    Reverse(arr);
    printf("Updated String is : %s", arr);


    return 0;
}