/******************************************************************************

Guided Practice - if, if-else, and switch statement

1.  Write a C program to accept two integers, check whether they are equal
    or not and print a statement
    Test data
         Enter 2 integers 15 4
         15 is not equal to 4
2.  Write a C program to check whether a given number is positive, negative or zero.
    Test data

        Enter a number  -5
        -5 is a negative number
3.  Write a C program to read the age of a candidate and determine whether it
    is eligible for casting his/her own vote
    Test data
        Enter your age  21
        Congratulations!  You are eligible to vote!
4.  Write a C program to find the largest of three numbers.
    Test data
        Enter 3 integers  4 9 1
        The largest number is 9
5.  Write a program in C to read any Month Number in integer and display
    Month name in the word
    Test data
        Enter the month number  9
        September



*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, largest;
    /*1.  Write a C program to accept two integers, check whether they are equal
        or not and print a statement
        Test data
           Enter 2 integers 15 4
           15 is not equal to 4
    */
    printf("Enter two intergers: ");
    scanf("%i %i",&num, &largest);
    if(num == largest)
      printf("Both numbers are equal to each other \n");
      else
        printf("Both numbers are NOT equal to each other \n");


    /*2.  Write a C program to check whether a given number is positive, negative or zero.
        Test data
            Enter a number  -5
            -5 is a negative number
    */
    printf("\nEnter an interger: ");
    scanf("%i", &num);
    if(num < 0)
    {
      printf("%i is a negative number \n", num);
    }
      else if(num > 0)
      {
        printf("%i is a positive number \n", num);
      }
      else
      {
        printf("%i equals zero \n", num);
      }


    /*3.  Write a C program to read the age of a candidate and determine whether it
          is eligible for casting his/her own vote
        Test data
            Enter your age  21
            Congratulations!  You are eligible to vote!
    */
    int age;

    printf("\nEnter your age: ");
    scanf("%i", &num);

    if (num < 18)
        printf("not eligible to vote \n");
        else
          printf("Congratulations!  You are eligible to vote! \n");

    /*4.  Write a C program to find the largest of three numbers.
        Test data
            Enter 3 integers  4 9 1
            The largest number is 9
    */
    printf("\nEnter a whole number: ");
    scanf("%i", &largest);
    printf("Enter a second whole number: ");
    scanf("%i", &num);
    if(num > largest)
          largest = num;
    printf("Enter a third whole number:");
    scanf("%i", &num);
    if(num > largest)
      largest = num;
    printf("%i is the largest number \n", largest);

    /*5.  Write a program in C to read any Month Number in integer and display
        Month name in the word
        Test data
            Enter the month number  9
            September
    */
    printf("\nEnter a month in number format (ex. 12 for December): ");
    scanf("%i", &num);
    if(num < 0 || num > 12)
      printf("ERROR: Please enter a valid month");
      else
        switch(num)
        {
          case 1: printf("January \n");
                  break;
          case 2: printf("February \n");
                  break;
          case 3: printf("March \n");
                  break;
          case 4: printf("April \n");
                  break;
          case 5: printf("May \n");
                  break;
          case 6: printf("June \n");
                  break;
          case 7: printf("July \n");
                  break;
          case 8: printf("August \n");
                  break;
          case 9: printf("September \n");
                  break;
          case 10: printf("October \n");
                   break;
          case 11: printf("November \n");
                   break;
          default: printf("December \n");
                   break;
        }

    /*6.  Write a program in C to execute the following menu
          Menu
          1 - right arrow
          2 - left arrow
          3 - up arrow
          4 - dowm arrow
          5 - quit
    */
    //display menue
    printf ("\nMenue\n");
    printf("1 - up arrow\n");
    printf("2 - down arrow\n");
    printf("3 - left arrow\n");
    printf("4 - right arrow\n");
    printf("5 - quit \n");

    printf("Enter your choice: ");
    scanf("%i", &num);
    //check statement
    switch(num)
    {
        case 1: printf("^\n");
                break;
        case 2: printf("v\n");
                break;
        case 3: printf("<\n");
                break;
        case 4: printf(">\n");
                break;
        case 5: printf("Exit Program");
                break;
        default: printf("Error \n");
    }


    /*7.  Write a program in C to name the shape when the number of sides is entered
        3 - Triangle
        4 - Quadrilateral
        5 - Pentagon
        6 - Hexagon
        7 - Septagon
        8 - Octagon
        9 - nonagon
        10 - decagon
    */
    printf("\nEnter number of sides of polygon: ");
    scanf("%i", &num);

    if( num < 3 || num > 10) {
      printf("Error: Please enter a valid number");
    }
    else
    {
      if ( num == 3)
      {
        printf("Triangle\n");
      }
      else if (num == 4)
      {
        printf("Quadrilateral\n");
      }
      else if (num == 5)
      {
        printf ("Pentagon\n");
      }
      else if (num == 6)
      {
        printf("Hexagon\n");
      }
      else if(num == 7)
      {
        printf("Septagon\n");
      }
      else if (num == 8)
      {
        printf("Octagon\n");
      }
      else if(num == 9)
      {
        printf("nonagon\n");
      }
      else
      {
        printf("decagon");
      }
    }
    return 0;
}
