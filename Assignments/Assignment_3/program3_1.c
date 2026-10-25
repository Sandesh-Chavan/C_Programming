#include<stdio.h>
#include<stdlib.h>

void PrintEven(int iNo)
{
    if (iNo <= 0)
    {
        return ;
    }
    
    int i = 1;

    while(i<=iNo)
    {
        printf("%d\t",i*2);
        i++;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number\n");

    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}