#include<stdio.h>
#include<stdbool.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A')
    {
        printf("Your exam is at 7AM\n");
    }
    else if(chDiv == 'B')
    {
        printf("your exam is at 8.30 Am\n");
    }
    else if(chDiv == 'C')
    {
        printf("Your exam is at 9.20 am\n");
    }
    else if(chDiv == 'D')
    {
        printf("Your exam is at 10.30 am\n");
    }
    else
    {
        printf("Invalid division\n");
    }

}


int main()
{
    char cValue = '\0';

    printf("ENter the charachter :");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);


    return 0;
}