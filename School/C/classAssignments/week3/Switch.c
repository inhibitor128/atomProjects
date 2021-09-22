/**********************Heading*********************************************************
Name: Joseph Gumbakis
Dates: 9/22/2021
Purpose:Write a program that will perform the following steps
		1.  User enters an integer, 0 to 9  (5)
		2.  Display the integer in English  (10)
		    if the user enters 7, the program prints seven
*****************************************************************************************/
#include<stdio.h>

int main()
{
    //declare variables
    int choice;

    printf("Enter an integer bewteen 0 and 9: ");
    scanf("%i", &choice);
    //check statement
    switch(choice)
    {
      case 0: printf("Zero \n");
              break;
      case 1: printf("One \n");
              break;
      case 2: printf("Two \n");
              break;
      case 3: printf("Three \n");
              break;
      case 4: printf("Four \n");
              break;
      case 5: printf("Five \n");
              break;
      case 6: printf("six \n");
              break;
      case 7: printf("Seven \n");
              break;
      case 8: printf("Eight \n");
              break;
      case 9: printf("Nine \n");
              break;
      default: printf("Invalid Option \n");
               break;
    }

     return 0;
}
