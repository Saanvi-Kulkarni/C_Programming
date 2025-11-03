////////////////////////////////////////////////////////////////////////////////////////
// 
// Required Header files
// 
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountFactors
// Description : It is used to Accept a number from user & Count total factors 
// Input : Integer
// Output : Integer
// Author : Saanvi Anand Kulkarni
// Date : 23/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////

int CountFactors(int iNo)
{
    int iCnt = 0;
    int iFactorCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFactorCount++;
            //printf("%d\n", iCnt);
        }
    }

    return iFactorCount;
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

    iRet = CountFactors(iValue);

    printf("Count of factors is: %d", iRet);

    return 0;
}
