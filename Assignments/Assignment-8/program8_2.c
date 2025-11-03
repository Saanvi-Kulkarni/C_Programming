////////////////////////////////////////////////////////////////////////////////////////
// 
// Required Header files
// 
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description : It is used to Accept a single digit from the user & print it into word
// Input : Integer
// Output : NA
// Author : Saanvi Anand Kulkarni
// Date : 21/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    switch(iNo)
    {
        case 0: 
            printf("Zero\n");
            break;
        case 1: 
            printf("One\n");
            break;
        case 2: 
            printf("Two\n");
            break;
        case 3: 
            printf("Three\n");
            break;
        case 4: 
            printf("Four\n");
            break;
        case 5: 
            printf("Five\n");
            break;
        case 6: 
            printf("Six\n");
            break;
        case 7: 
            printf("Seven\n");
            break;
        case 8: 
            printf("Eight\n");
            break;
        case 9: 
            printf("Nine\n");
            break;
        default: 
            printf("Invalid Input\n");
            break;
    }
}

////////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function of the application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter a Number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}