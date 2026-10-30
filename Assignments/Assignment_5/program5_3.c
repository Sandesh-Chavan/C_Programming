#include<stdio.h.>
#include<stdlib.h>

void DisplayGrades(float iNo)
{
    if (iNo >=90)
    {
        printf("You Have Grade:A\n");
    }
    else if(iNo >=75 || iNo <=89)
    {
        printf("You Have Grade:B\n");
    }
    else if(iNo >=60 || iNo <=74)
    {
        printf("Your have Grade:C\n");
    }
    else if(iNo >= 40 || iNo <= 59)
    {
        printf("You HAve Grade:D");
    }
    else
    {
        printf("you Are Succsessful\n");
    }
}    


int main()
{
    float fMarks = 0.0f;

    printf("Enter Marks:\n");
    scanf("%f",fMarks);

    DisplayGrades(fMarks);

    return EXIT_SUCCESS;
}
