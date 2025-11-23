#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int odd = 0;
    int even = 0;

    for(i = 1; i <= iRow; i++)
    {
        odd = 1;
        even = 2;

        for(j = 1; j <= iCol; j++)
        { 
            if(i % 2 == 0)
            {
                printf("%d\t", odd);
                odd = odd + 2;
            }
            else
            {
                printf("%d\t", even);
                even = even + 2;
            }
        } 


        printf(" \n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows: \n");
    scanf("%d", &iValue1);

    printf("Enter number of columns: \n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}