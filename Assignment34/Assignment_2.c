#include<stdio.h>

void Display(char ch)
{
    char lower = '\0';

    if(ch >= 'a' && ch <= 'z')
    {
        lower = ch - 32;
        printf("New characrter is : %c\n", lower);
    }
    else
    {
        printf("Invalid input");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character value :  ");
    scanf("%c", &cValue);

    Display(cValue);


    return 0;
}