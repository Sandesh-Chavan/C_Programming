#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fNo,int iyear)
{
  float fBonus = 0.0f;
  
  if (fNo <= 0 || iyear < 0)
  {
    printf("Inavalid Input\n");
  }

  else if(iyear > 10)
  {
    fBonus = fNo*15/100;
    printf("Bonus = %2f",fBonus);
  }

  else if(iyear >=5)
  {
    fBonus = fNo*15/100;
    printf("Bonus = %2f",fBonus);
  }

  else
  {
    fBonus = fNo*5/100;
    printf("Bonus = %2f",fBonus);
  }
}

int main()
{
    float fValue = 0.0f;
    int iValue = 0;

    printf("Enter Salary And Serivicy Year:");
    scanf("%f %d",&fValue,&iValue);

    CalculateBonus(fValue,iValue);

    return EXIT_SUCCESS;
}