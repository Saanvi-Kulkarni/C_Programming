////////////////////////////////////////////////////////////////////////////////////////
// 
// Required Header files
// 
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckZero
// Description : It is used to accept no from user and check whether it has a zero or not
// Input : Integer
// Output : Boolean
// Author : Saanvi Anand Kulkarni
// Date : 24/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////

bool CheckZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            return true;
        }

        iNo = iNo / 10;
    }

    return false;

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
    bool bRet = false;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    bRet = CheckZero(iValue);

    if(bRet == true)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return 0;
}