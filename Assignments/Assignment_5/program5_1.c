#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst, int iSecond , int iThird)
{
    if(iFirst > iSecond)
    {
        printf("This is thr Big Number",iFirst);
    }
    else if( iFirst < iSecond)
    {
        printf("This is the Big Number:",iSecond);
    }
    else
    {
        printf("This is The Big number",iThird);
    }
}

int main()
{
int iValue1 = 0;
int iValue2 = 0;
int iValue3 = 0;

printf("Enter First Number:",&iValue1);
scanf("%d",&iValue1);
printf("Enter Second Number:",&iValue2);
scanf("%d",&iValue2);
printf("Enter Third Number:",&iValue3);
scanf("%d",&iValue3);

FindGreater(iValue1,iValue2,iValue3);



    return EXIT_SUCCESS;
}