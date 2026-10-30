#include<stdio.h>
#include<stdlib.h>

void CheckTriangle(int iNo1,int iNo2,int iNo3)
{
    if(iNo1 <= 0 || iNo2 <=0 || iNo3 <=0 )
    {
        printf("Inavalid Input\n");
    }
    else if((iNo1 + iNo2 > iNo3)&&(iNo1 + iNo3 > iNo2)&&(iNo2 + iNo3 > iNo1))
    {
        printf("Valid Trangle");
    }

    else
    {
        printf("Invalid Trangle");
    }
}

int main()
{
    int iValue1,iValue2,iValue3;

    printf("Enter Three Side:");
    scanf("%d %d %d",&iValue1,&iValue2,iValue3);

    CheckTriangle(iValue1,iValue2,iValue3);

    return EXIT_SUCCESS;
}