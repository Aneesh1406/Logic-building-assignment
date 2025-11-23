#include<stdio.h>

void Pattern(int irow, int icol)
{
    int i = 0, j = 0;
    char ch = 97;

    for(i = 1; i <= irow; i++)
    {
        for(j = 1; j <= icol; j++)
        {
            printf("");
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter value number of rows and columns :");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}