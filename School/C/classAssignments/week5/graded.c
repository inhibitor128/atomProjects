/****************************************************************
Name Joseph Gumbakis
Dates:  10/5/2021 - 10/12/2021
Project:  Factorial and shapes with for loops
*****************************************************************/

#include<stdio.h>

int main()
{
    //Pat one: Factorial loop
    int fact = 1;
    printf("Table of first ten factorials\n");
    printf("\n n   factorial#\n");
    printf("---  -----------\n");
    for(int row = 1; row <= 10; ++row)
    {
        fact = fact * row;
        printf("%2i %8i\n", row, fact);
    }
    //Part two: print two shapes to console
    printf("\npick two shaps and print to console\n");
    printf("\n");
    printf("Shape one: \n");//shape one 4 rows ten col
    for(int n = 0; n < 4; ++n)
    {
      printf("\n");
      for(int j = 1; j <= 10; ++j)
     {

       printf("*");

     }
    }
    printf("\n");
    printf("\nShape two: \n"); //shape two upside down triangle
    for(int row = 10; row >= 1; --row)
    {
      printf("\n");
      for(int col = 1; col <= row; ++col)
     {
       printf("*");
     }
    }
    printf("\n");
    printf("\nEnd of program\n");
    return 0;
}
