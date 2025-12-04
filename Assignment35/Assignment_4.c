#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
    if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
        *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    char arr[20];
    bool bRet = false;

    printf("Enter String :");
    scanf("%[^'\n]s",arr);

    bRet = ChkVowel(arr);

    if(bRet == true)
    {
        printf("Contains Vowels..\n");
    }
    else
    {
        printf("It does not contains vowels..\n");
    }

    return 0;
}