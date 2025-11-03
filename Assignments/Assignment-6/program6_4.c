////////////////////////////////////////////////////////////////////////////////////////
// 
// Required Header files
// 
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Multiply
// Description : It is used to accept three numbers and print its multiplication
// Input : Integer
// Output : Integer
// Author : Saanvi Anand Kulkarni
// Date : 21/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////

bool Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMultiplication = 0;

    iMultiplication = iNo1 * iNo2 * iNo3;
}

////////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function of the application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Enter first number: ");
    scanf("%d", &iValue1);

    printf("Enter second number: ");
    scanf("%d", &iValue2);

    printf("Enter third number: ");
    scanf("%d", &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication of three numbers is: %d", iRet);

    return 0;
}