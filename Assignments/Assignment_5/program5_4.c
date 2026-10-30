#include<stdio.h>
#include<stdlib.h>

void CheckDivisiblility(int iNo)
{
    if((iNo %3 ==0) && (iNo % 5 ==0))
    {
        printf("Divisible By Both");
    }
    else if (iNo % 3 ==0)
    {
        printf("Divisible By 3");
    }
    else if (iNo % 5 ==0)
    {
        printf("Divisible By 5");
    }
    else 
    {
        printf("Not Divisible By Ither");
    }

}

int main()
{
    int iValue =0;

    printf("Enter The CHack Number:");
    scanf("%d",&iValue);

    CheckDivisiblility(iValue);

    return EXIT_SUCCESS;

}