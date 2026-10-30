#include<stdio.h>
#include<stdlib.h>

void CheckCharachterType(char cNo)
{
  if((cNo >='A')&&(cNo <= 'Z'))
  {
    printf("UuperCase Charachterstic\n");
  }
  else if((cNo >= 'a')&&(cNo <= 'z'))
  {
    printf("Lowecase Charachter");
  }
  else if((cNo >='0')&&(cNo <= '9'))
  {
    printf("Its Digits");
  }
  else
  {
    printf("It's Special Charachter");
  }
}

int main()
{
    char cValue = '\0';

    printf("Enter What You Want Too Check\n");
    scanf("%c",&cValue);

    CheckCharachterType(cValue);

    return EXIT_SUCCESS;
}