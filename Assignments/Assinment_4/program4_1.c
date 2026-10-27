#include<stdio.h>
#include<stdlib.h>


void CheckNumber(int iValue)
{
    if(iValue < 0)
    {
       printf("It's A Negative Number\n"); 
    }
    else if(iValue > 0)
    {
        printf("Its A Positive Number\n");
    }
    else
    {
        printf("Zero");
    }

}
int main()
{
    int iValue = 0;

    printf("Enter The Number:\n");
    scanf("%d",&iValue);

    CheckNumber(iValue);
    return EXIT_SUCCESS;
}