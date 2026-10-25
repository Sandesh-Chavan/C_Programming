#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckVowel(char cNo)
{
    if(cNo== 'a' || cNo== 'e' || cNo == 'i' || cNo == 'u')
    {
        return TRUE;

    }
    else
    {
       return FALSE;
    }
}

 int main()
 {
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Any CHarachter:\n");

    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if (bRet == TRUE)
    {
        printf("Its Vowel\n");
    }
    else
    {
        printf("ITs NOt Vowel");
    }
 }