#include <stdio.h>

int main(void)
{
  //declare variables
  int value1;

  printf("Please enter a whole number: ");
  scanf("%i", &value1);


  //calculations
  if(value1 % 3 == 0)
  {
    printf("%i is divisible by 3 \n", value1);
  }
  if (value1 % 5 == 0)
  {
    printf("%i is divisible by 5 \n", value1);
  }
  if(value1 >= 1 && value1 <= 50)
  {
    printf("%i is between 1 and 50", value1);
  }
  if(value1 >= 51 && value1 <= 100)
  {
    printf("%i is between 51 and 100 \n", value1);
  }
  if(value1 > 0)
  {
    printf("%i is a positive number \n", value1);
  }
  if(value1 < 0)
  {
    printf("%i is a negitive number \n", value1);
  }
  if(value1 % 2 ==0)
  {
    printf("%i is an even number \n", value1);
  }
  if(value1 % 2 != 0)
  {
    printf("%i is a odd number \n", value1);
  }
  if(value1 < 1000)
  {
    printf("%i is less then 1000 \n", value1);
  }
  if (value1 > 500)
  {
    printf("%i is greater then 500 \n", value1);
  }
  else
  {
    printf("Please enter a number \n");
  }
  //output

  return 0;
}
