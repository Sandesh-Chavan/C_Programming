#include<stdio.h>

void Display(int iNo,int iFrequency)
{
   

    for( iNo =1;iNo<=iFrequency;iNo++)
    {
        printf("%d\n",iNo);
    }
}

  int main()
  {
    int iValue = 0;
    int iCount = 0;

    printf("Entre Number\n");
    scanf("%d",&iValue);

    printf("Entre Frequancy\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
  }