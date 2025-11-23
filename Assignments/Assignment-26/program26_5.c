#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    int iCount = 2;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCount % 2 == 0)
        {
            printf("%d\t", iCount);
            iCount = iCount + 2;
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: \n");
    scanf("%d", &iValue);

    Pattern (iValue);

    return 0;
}