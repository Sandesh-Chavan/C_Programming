#include<stdio.h>
#include<stdlib.h>

int Display(int iNo)
{
    if (iNo <= 10)
    {
       printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter The CHeck Number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}