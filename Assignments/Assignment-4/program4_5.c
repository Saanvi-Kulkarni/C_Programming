////////////////////////////////////////////////////////////////////////////////////////
// 
// Required Header files
// 
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FactDiff
// Description : Accept a no from user & display difference between summation of factors & non-factors
// Input : Integer
// Output : Integer
// Author : Saanvi Anand Kulkarni
// Date : 20/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iDifference = 0;
    int iSum_factors = 0;
    int iSum_nonFactors = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            //printf("Factors: %d\n", iCnt);
            iSum_factors = iSum_factors + iCnt;
            //printf("Sum of factors is: %d", iSum_factors);
        }
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            //printf("Non-factors: %d\n", iCnt);
            iSum_nonFactors = iSum_nonFactors + iCnt;
            //printf("Sum of non factors is: %d", iSum_nonFactors);
        }
    }

    iDifference = iSum_factors - iSum_nonFactors;

    return iDifference;
}

////////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function of the application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d", iRet);

    return 0;
}