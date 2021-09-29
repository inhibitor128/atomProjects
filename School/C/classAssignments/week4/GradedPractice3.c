/*******************************************************************************************
Name
Dates:  9/28/2021 - 10/4/2021
Program Description:  Write a menu-driven program that allow the user to pick a
               number to reveal the title of a kids' movie.
********************************************************************************************/
#include<stdio.h>

int main()
{
  //declare variables
  int num;

  //display menue
  printf ("Menue\n");
  printf("1 - Shrek\n");
  printf("2 - Babe\n");
  printf("3 - Dumbo\n");
  printf("4 - Exit Program\n");

  printf("Enter your choice: ");
  scanf("%i", &num);

  if(num < 0 || num > 4)
    printf("Error: Please enter a valid choice");
    else
      switch(num)
      {
        case 1:
      }

  return 0;
}
