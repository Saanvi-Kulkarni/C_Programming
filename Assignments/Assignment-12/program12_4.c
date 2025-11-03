////////////////////////////////////////////////////////////////////////////////////////
// 
// Required Header files
// 
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : SumFactors
// Description : It is used to Accept a number from user & print sum of even factors 
// Input : Integer
// Output : Integer
// Author : Saanvi Anand Kulkarni
// Date : 23/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iFactorAddition = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if(((iNo % iCnt) == 0) && ((iCnt % 2) == 0))
        {
            iFactorAddition = iFactorAddition + iCnt;
            //printf("%d\n", iCnt);
        }
    }
    return iFactorAddition;
}

// Time Complexity = O(N/2)

////////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function of the application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet =0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = SumFactors(iValue);

    printf("Addition of factors is: %d", iRet);

    return 0;
}

