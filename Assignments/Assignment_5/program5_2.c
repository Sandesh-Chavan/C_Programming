#include<stdio.h>
#include<stdlib.h>

void CheckLeapyear(int iNo)
{
  if (iNo <= 0)
  {
   printf("Invalid year\n");
  }
  else if (iNo % 400 ==0)
  {
    printf("This Year is leap\n");
  }
  else if(iNo % 100 ==0)
  {
    printf("This is not leap year\n");
  }
  else if( iNo % 4 ==0)
  {
    printf("Leap yera\n");
  }
  else
  {
     printf("Not A leap year\n");
  }
}

int main()
{
    int iValue = 0;

    printf("Enter the Year:\n");
    scanf("%d",iValue);

    CheckLeapyear(iValue);

    return EXIT_SUCCESS;
}