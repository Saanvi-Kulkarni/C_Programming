////////////////////////////////////////////////////////////////////////////////////////
// 
// Required Header files
// 
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : RangeDisplay
// Description : It is used to accept range from the user & return addition of all even nos within  
// Input : Integer, Integer
// Output : Integer
// Author : Saanvi Anand Kulkarni
// Date : 23/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////

int RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
    int iAddition = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(((iCnt % 2) == 0) && (iStart > 0) && (iEnd > 0) && (iStart < iEnd))
        {
            iAddition = iAddition + iCnt;
            //printf("%d\t", iCnt);
        }
    }

    return iAddition;
}

////////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function of the application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter starting number: ");
    scanf("%d", &iValue1);

    printf("Enter ending number: ");
    scanf("%d", &iValue2);

    iRet = RangeDisplay(iValue1, iValue2);

    if((iValue1 > 0) && (iValue2 > 0) && (iValue1 < iValue2))
    {
        printf("Addition is: %d", iRet);
    }
    else
    {
        printf("Invalid Input\n");
    }

    return 0;
}