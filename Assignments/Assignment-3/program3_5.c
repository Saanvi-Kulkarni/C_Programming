////////////////////////////////////////////////////////////////////////////////////////
// 
// Required Header files
// 
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkVowel
// Description : Accept a character from user & check whether that it is vowel or not
// Input : Character
// Output : Boolean
// Author : Saanvi Anand Kulkarni
// Date : 20/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////

bool ChkVowel(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return true;
    }
    else
    {
        return false;
    }
}

////////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function of the application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter character : \t");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == true)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}