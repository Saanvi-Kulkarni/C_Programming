////////////////////////////////////////////////////////////////////////////////////////
// 
// Required Header files
// 
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FindLargest
// Description : It is used to Accept three numbers & Find Largest 
// Input : Integer
// Output : Integer
// Author : Saanvi Anand Kulkarni
// Date : 20/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////

int FindLargest(int a, int b, int c)
{
    int iAns = 0; 

    if ((a > b) && (a > c))
    {
        return a;
    }
    else if ((b > a) && (b > c))
    {
        return b;
    }
    else
    {
        return c;
    }
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

    iRet = FindLargest(iValue1, iValue2, iValue3);

    printf("Largest number is: %d\n", iRet);

    return 0;
}