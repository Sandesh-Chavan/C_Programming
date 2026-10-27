#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge >= 21)
    {
        printf("Redy For Voying");
    }
    else if(iAge <= 21)
    {
        printf("Not Redy for Voiting");

    } 
    else
    {
        printf("Not Valid");
    }


}

int main()
{
    int iValue = 0;

    printf("Enter The Cheking Number");
    scanf("%d",&iValue);

    CheckVotingEligibility(iValue);

    return EXIT_SUCCESS;
}