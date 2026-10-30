#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fNo)
{
    float fDiscount = 0.0f;
    float fPayable = 0.0f;

    if(fNo < 0)
    {
       printf("Invalid input\n");
    }
    
    else if(fNo < 1000)
    {
        fDiscount = 0;
    }
    else if(fNo < 5000)
    {
        fDiscount = 10;
    }
    else 
    {
        fDiscount = 20;
    }

    if(fNo >= 0)
    {
        fPayable = fNo -(fNo*fDiscount/100);

        printf("Payable Amount = %2f",fPayable);
    }
  
}

  int main()
  {
    float fValue = 0.0f;

    printf("Enter Purchese Amount:\n");
    scanf("%f",&fValue);

    CalculateDiscount(fValue);

    return EXIT_SUCCESS;
  }