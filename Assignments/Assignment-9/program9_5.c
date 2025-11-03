////////////////////////////////////////////////////////////////////////////////////////
// 
// Required Header files
// 
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DiffFactorial
// Description : It is used to returns difference between even & odd factorial of given number 
// Input : Integer
// Output : Integer
// Author : Saanvi Anand Kulkarni
// Date : 21/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////

int DiffFactorial(int iNo)
{
    int iCnt = 0;
    int iEvenFactorial = 1;
    int iOddFactorial = 1;
    int iFactorialDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >=1; iCnt--)
    {
        if((iCnt % 2) == 0)
        {
        iEvenFactorial = iEvenFactorial * iCnt;
        //printf("%d\n", iFactorial);
        }
    }

    for(iCnt = iNo; iCnt >=1; iCnt--)
    {
        if((iCnt % 2) != 0)
        {
        iOddFactorial = iOddFactorial * iCnt;
        //printf("%d\n", iFactorial);
        }
    }

    iFactorialDiff = iEvenFactorial - iOddFactorial;

    return iFactorialDiff;
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

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = DiffFactorial(iValue);

    printf("Even Factorial of number is %d", iRet);

    return 0;
}