////////////////////////////////////////////////////////////////////////////////////////
// 
// Required Header files
// 
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : MultDigits
// Description : It is used to accept no from user and return multiplication of all digits
// Input : Integer
// Output : Integer
// Author : Saanvi Anand Kulkarni
// Date : 24/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMultiplication = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iMultiplication = iMultiplication * iDigit;

        iNo = iNo / 10;

        //printf("%d\n", iDigit);
    }

    return iMultiplication;
}

// Time Complexity = O(log10(N))

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

    iRet = MultDigits(iValue);

    printf("%d", iRet);

    return 0;
}