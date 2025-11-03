////////////////////////////////////////////////////////////////////////////////////////
// 
// Required Header files
// 
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : RangeDisplay
// Description : It is used to accept range from user & display all even nos in the range 
// Input : Integer, Integer
// Output : NA
// Author : Saanvi Anand Kulkarni
// Date : 23/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart <= iEnd)
    {
        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                printf("%d\t", iCnt);
            }
        }
    }
    else
    {
        printf("Invalid Input\n");
    }
}

/*    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(((iCnt % 2) == 0) && (iStart < iEnd))
        {
            printf("%d\t", iCnt);
        }
        else
        {
            printf("Invalid Input\n");
        }
    }
*/

////////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function of the application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting number: ");
    scanf("%d", &iValue1);

    printf("Enter ending number: ");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}