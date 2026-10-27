#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iNo)
{
    if(iNo % 2 ==0)
    {
        printf("Its Even Number:");

    }
    else
    {
        printf("It's Odd Number");
    }
}
int main()
{
    int iValue = 0;

    printf("enter The Number For Checkinng");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);
    return EXIT_SUCCESS;
}