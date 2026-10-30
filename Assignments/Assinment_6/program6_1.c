#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iNo)
{
    float fBill = 0.0f;

    if(iNo <= 0)
    {
        printf("Freee");
    }
    else if(iNo <= 100)
    {
        fBill = iNo*5;
        printf("Bill = %2f",fBill);
    }
    else if(iNo <= 200)
    {
        fBill =(100*5) + ((iNo - 100)*7);
        printf("Bill = %2f",fBill);
    }
    else
    {
        fBill = (100*5)+(100*7)+((iNo - 200)*10);
        printf("Bill = %2f",fBill);
    }


}

int main()
{
    int iValue = 0;

    printf("Enter Your Bill\n");
    scanf("%d",&iValue);

    CalculateElectricityBill(iValue);


    return EXIT_SUCCESS;
}