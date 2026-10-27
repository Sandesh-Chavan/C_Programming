#include<stdio.h>
#include<stdlib.h>

void FindGreater(int First , int second)
{
    if(First > second)
    {
        printf("%dThis is Greater",First);
    }
    else if(second > First)
    {
        printf("%dThis is Greator",second);
    }
    else
    {
        printf("'Its A Equal Number");
    }


}
 
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Two Numbers:\n");
    scanf("%d %d",iValue1, iValue2);

    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}