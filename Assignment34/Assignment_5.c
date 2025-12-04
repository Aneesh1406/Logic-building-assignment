#include<stdio.h>

void Display(char ch)
{
    printf("The Ascii value of character is  %c\t:  %d", ch ,ch);

}

int main()
{
    char cValue = '\0';

    printf("Enter the charachter : ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}