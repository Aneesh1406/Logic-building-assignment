#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
    int icount = 0;

    if(ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*' )
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
    char cValue = '\0';
    bool bret = false;

    printf("Enter the character : ");
    scanf("%c", &cValue);

    bret = ChkSpecial(cValue);

    if(bret == true)
    {
        printf("It is special Character.\n");
    }
    else
    {
        printf("It is not a special Character.\n");
    }



    return 0;
}