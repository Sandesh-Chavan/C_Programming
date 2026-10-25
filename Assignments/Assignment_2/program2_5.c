#include<stdio.h>

#define TRUE 1
#define FALSE 0


typedef int BOOL;

BOOL CheckEven(int iNo)
{
    if (iNo % 2 ==0)
    {
        printf("The Number IS Even\n");
    }
    else
    {
        printf("NUmber is ODD\n");
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter The NUmber:\n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    return 0;
}