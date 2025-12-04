#include<stdio.h>

void Display(char ch)
{
    char uhj = '\0';

    if(ch == 'A' && ch == 'Z')
    {
        uhj = ch + 32;
        printf("%c", uhj);
    }
    else if(ch == 'a' && ch == 'z')
    {
        uhj = ch - 32;
        printf("%c",uhj);
    }
    else
    {
        printf("Invalid input\n");
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