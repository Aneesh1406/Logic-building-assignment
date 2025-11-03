#include<stdio.h>

void CheckLeapYear(int year)
{
    if(year % 4 == 0 && year % 100 != 0)
    {
        printf("It is a leap year");
    }
    else if(year % 400 == 0)
    {
        printf("It is a leap year");
    }
    else
    {
        printf("It is not a leap year");
    }

}
int main()
{
    int yr;
    printf("ENter year: ");
    scanf("%d", &yr);
    CheckLeapYear(yr);
    return 0;
}