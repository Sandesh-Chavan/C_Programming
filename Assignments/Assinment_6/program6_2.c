#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks,int iAge)
{
    if(fMarks < 0 || fMarks > 100 || iAge < 0)
    {
        printf("InValid Input:\n");
    }
    else if(fMarks >= 60 && iAge >=17)
    {
        printf("You Can Take Addmision:\n");
    }
    else
    {
        printf("You Can't Take Addimision;\n");
    }
}

int main()
{
    float fValue = 0;
    int iValue = 0;

    printf("Enter Marks And Age:\n");
    scanf("%f %d",&fValue,&iValue);

    CheckAdmission(fValue,iValue);

    return EXIT_SUCCESS;
}