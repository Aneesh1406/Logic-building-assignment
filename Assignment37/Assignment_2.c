#include<stdio.h>

int Countchar(char *str, char ch)
{
    int icnt = 0;
    int ifreq = 0;

    for(icnt = 0; str[icnt] != '\0'; icnt++)
    {
        if(str[icnt] == ch)
        {
            ifreq++;
        }
    }
    
    return ifreq;


}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the string :");
    scanf("%[^'\n']s", arr);

    printf("Enter the character :");
    scanf(" %c", &cValue);

    iRet = Countchar(arr, cValue);
    printf("Number of times charcter is : %d", iRet);

    return 0;
}