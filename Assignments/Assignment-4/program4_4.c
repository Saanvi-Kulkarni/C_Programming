// Write a program which accept a number from the user and display all its non-factors

////////////////////////////////////////////////////////////////////////////////////////
// 
// Required Header files
// 
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : SumNonFact
// Description : It is used to Accept a no from user & display summation of non-factors
// Input : Integer
// Output : Integer
// Author : Saanvi Anand Kulkarni
// Date : 20/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iAns = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            //printf("%d\n", iCnt);
            iAns = iAns + iCnt;
        }
    }

    return iAns;
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

    iRet = SumNonFact(iValue);

    printf("Summation of the non-factors is: %d", iRet);    

    return 0;
}