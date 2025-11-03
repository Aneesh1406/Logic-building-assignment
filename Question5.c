#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool ChkVowel(char cNo)
{
    if(cNo == 'a' || cNo == 'e' || cNo == 'i' || cNo == 'o' || cNo == 'u')
    {
        printf("%c", cNo);
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bret = false;

    printf("Enter charachter\n");

    scanf("%c", &cValue);

    if(bret == true)
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is not a vowel");
    }

    return 0;
}