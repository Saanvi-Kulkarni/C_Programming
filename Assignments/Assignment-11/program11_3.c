////////////////////////////////////////////////////////////////////////////////////////
// 
// Required Header files
// 
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : RangeSum
// Description : It is used to accept range from the user & return addition of all nos within 
// Input : Integer, Integer
// Output : Integer
// Author : Saanvi Anand Kulkarni
// Date : 23/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iAddition = 0;

    if((iStart > 0) && (iEnd > 0) && (iStart < iEnd))
    {
        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            iAddition = iAddition + iCnt;
            //printf("%d\t", iAddition);
        }
    }
    else
    {
        printf("Invalid range\n");
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

    iRet = RangeSum(iValue1, iValue2);

    if((iValue1 > 0) && (iValue2 > 0) && (iValue1 < iValue2))
    {
        printf("Addition is: %d", iRet);
    }

    return 0;
}