////////////////////////////////////////////////////////////////////////////////////////
// 
// Required Header files
// 
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : SumEvenNumbers
// Description : It is used to calculate sum of first N natural even nos
// Input : Integer
// Output : Integer
// Author : Saanvi Anand Kulkarni
// Date : 23/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////

int SumEvenNumbers(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iSum = iSum + iCnt;
        }

        //printf("%d\n", iCnt);
    }

    return iSum;
}

// Time Complexity: O(N)

////////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function of the application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter limit: ");
    scanf("%d", &iValue);

    iRet = SumEvenNumbers(iValue);

    printf("Sum of first N even natural numbers is: %d", iRet);

    return 0;
}