// MathFacts.cpp : Defines the entry point for the console application.
//
//Math Facts

//Required Lbraries
#include <stdio.h>
#include <stdlib.h>  //required to use rand()
#include <time.h>   //required to use srand(time(NULL))


/*  Name: Joseph Gumbakis
    Date:  11/2/2021 - 11/8/2021
	Program description:  This program will help your youngster to practice their math facts.
			They will be asked to enter the range of numbers to be used in the practice.
			Each practice set will consist of 5 equations.  The code will present equations with
			random numbers and ask the user to enter the solution.  If they get an answer wrong,
			the program will print the equation again and give you an additional opportunity to
			answer again.  If the second answer is incorrect, the program will print the equation
			with the correct answer and proceed to the next question.  Once the problem set has been
			completed, the program will return to the menu and allow the user to select another problem
			set or quit the program.
	Grading:
		70 - Complete addition, subtraction, multiplication, division and Quit functions
				random number = (int)(rand()%(end - begin)) + 1;
		10 - Signs - "Math Facts" sign, "Bye" sign,
		10 - Encouraging statements - "Good work!", "Keep Going!", "Nice job!", "Awesome!"
		10 - On time

*/
//Function Definitions
void Header(void)
{
    //input: none
	//output: none
	//goal: print Math Fact header to console
    printf(" #     #                            \n");
    printf(" ##   ##   ##   ##### #    #        \n");
    printf(" # # # #  #  #    #   #    #        \n");
    printf(" #  #  # #    #   #   ######        \n");
    printf(" #     # ######   #   #    #        \n");
    printf(" #     # #    #   #   #    #        \n");
    printf(" #     # #    #   #   #    #        \n");
    printf("\n");
    printf(" #######                            \n");
    printf(" #         ##    ####  #####  ####  \n");
    printf(" #        #  #  #    #   #   #      \n");
    printf(" #####   #    # #        #    ####  \n");
    printf(" #       ###### #        #        # \n");
    printf(" #       #    # #    #   #   #    # \n");
    printf(" #       #    #  ####    #    ####  \n");
    printf("\n");
}

void Description(void)
{
	//input: none
	//output: none
	//goal: introduction to the Math Facts Program

	printf("This program will help you to practice your math facts.  You will be asked to enter the\n");
	printf(" range  of numbers to be used to practice.  Each practice set will consist of 5 equations.\n");
    printf("If you get an answer wrong, the program will give you an additional opportunity to\n");
    printf("answer again.  If the second answer is incorrect, the program will print the equation \n");
    printf("with the correct answer.\n");

}
void PrintMenu(void)
{
      //input: none
      //returned output: none
      // goal:  print the menu options

	printf("\n\nMenu \n");
	printf(" 1 - Addition \n");
	printf(" 2 - Subtraction \n");
	printf(" 3 - Multiplication \n");
	printf(" 4 - Integer Division \n");
	printf(" 5 - Quit \n");
}
int UsersChoice(int min, int max)
{
	//input: minimum #, maximum #
	//returned output:  minimum < an integer < maximum
	//goal:  prompt the user for a # between min and max

	int c;		//menu choice
	do
	{
	    printf("Enter your choice: ");
	    scanf("%i", &c);

	    if(c < min || c > max)
		   printf("Invalid Entry.  Please try again\n");

    }while(c < min || c > max);

    return (c);
}
void Addition(int b, int e)
{
    //input:  none
    //returned output:  none
    //purpose:  to create and correct 5 multiplication problems
    int first, second, answer, a;

    first = (int)(rand()%(e - b)) + b;
    second = (int)(rand()%(e - b)) + b;

    answer = first + second;

    printf("What is %i + %i? ", first, second);
    scanf("%i", &a);

    if(answer == a)
    {
        printf("Keep up the good work!\n");
    }
    else
    {
        printf("What is %i + %i? ", first, second);
        scanf("%i", &a);
        if(answer == a)
        {
            printf("You are on your way!\n");
        }
        else
        {
            printf("%i + %i = %i", first, second, answer);
        }
    }
}
void Subtraction(int b, int e)
{
    //input:  none
    //returned output:  none
    //purpose:  to create and correct 5 multiplication problems
    int first, second, answer, a;

    first = (int)(rand()%(e - b)) + b;
    second = (int)(rand()%(e - b)) + b;

    answer = first - second;

    printf("What is %i - %i? ", first, second);
    scanf("%i", &a);

    if(answer == a)
    {
        printf("Job well done!\n");
    }
    else
    {
        printf("What is %i - %i? ", first, second);
        scanf("%i", &a);
        if(answer == a)
        {
            printf("Rock Star!\n");
        }
        else
        {
            printf("%i - %i = %i", first, second, answer);
        }
    }
}
void Multiplication(int b, int e)
{
    //input:  none
    //returned output:  none
    //purpose:  to create and correct 5 multiplication problems
    int first, second, product, p;

    first = (int)(rand()%(e - b)) + b;
    second = (int)(rand()%(e - b)) + b;

    product = first * second;

    printf("What is the product of %i x %i? ", first, second);
    scanf("%i", &p);

    if(product == p)
    {
        printf("Awesome, you are on track\n!");
    }
    else
    {
        printf("What is the product of %i x %i? ", first, second);
        scanf("%i", &p);
        if(product == p)
        {
            printf("Awesome, you are on track!\n");
        }
        else
        {
            printf("The product of %i multiplied by %i is %i", first, second, product);
        }
    }
}
void Division(int b, int e)
{   //input:  none
	//returned output:  none
	//purpose:  to create and correct 5 integer division and remainder problems
	int first, second, quotient, remain, q, r;

    first = (int)(rand()%(e - b)) + b;
    second = (int)(rand()%(e - b)) + b;

    quotient = first / second;
    remain = first % second;

    printf("What is the quotient of %i/%i? ", first, second);
    scanf("%i", &q);

    printf("What is the remander of %i/%i? ", first, second);
    scanf("%i", &r);

    if(quotient == q && remain == r)
    {
        printf("Awesome!\n");
    }
    else
    {
        if(quotient == q)
        {
            printf("What is the remander of %i/%i? ", first, second);
            scanf("%i", &r);
            if(remain == r)
            {
                printf("Great Job!\n");
            }
            else
            {
                printf("Remander = %i\n", remain);
            }
        }// end of quotient == q
        else
        {
            printf("What is the quotient of %i/%i? ", first, second);
            scanf("%i", &q);
            if(quotient == q)
            {
                printf("Correct!\nKeep it going!\n");
            }
            else
            {
                printf("Quotient is %i\n", quotient);
            }
        }
    }

}
void Quit(void)
{
    //input:  none
	//returned output:  none
	//purpose:  to print a good bye message
	printf("\n");
	printf("#####                       \n");
    printf("#     #  ####   ####  #####  \n");
    printf("#       #    # #    # #    # \n");
    printf("#  #### #    # #    # #    # \n");
    printf("#     # #    # #    # #    # \n");
    printf("#     # #    # #    # #    # \n");
    printf("#####   ####   ####  #####  \n");
    printf("\n");
    printf("######                       \n");
    printf("#     # #   # ######         \n");
    printf("#     #  # #  #              \n");
    printf("######    #   #####          \n");
    printf("#     #   #   #              \n");
    printf("#     #   #   #              \n");
    printf("######    #   ######         \n");
    printf("\n");

}
/****************************************************************************************/
void Exercises(int c)
{   //input:  validated menu choice
	//returned output:  none
	//purpose:  to redirect the program to the menu choice given by the user

	//variables
	int count =1,
	    begin,		//the lower component of the range of numbers
		end; 		//the upper component of the range of numbers

	if(c != 5)//get range numbers
	{
		printf(" Range of numbers\n");
		printf("Where does your range begin? ");
		scanf("%i", &begin);

		printf("Where does your range end? ");
		scanf("%i", &end);
	}
    switch(c)
    {
      case 1:
        while(count <= 5)
        {
            printf("%i. ", count);
            Addition(begin, end);
            ++count;
        }
        break;
      case 2:
        while(count <= 5)
        {
            printf("%i. ", count);
            Subtraction(begin, end);
            ++count;
        }
        break;
      case 3:
        while(count <= 5)
        {
            printf("%i. ", count);
            Multiplication(begin, end);
            ++count;
        }
        break;
      case 4:
        while(count <= 5)
        {
            printf("%i. ", count);
            Division(begin, end);
            ++count;
        }
        break;
      default:  Quit();  break;
    };
}
/*********************************************************************************************/

int main(void)
{
	srand(time(NULL));  //required for randomness - do not uncomment until you are finished

	//variables
	int choice;		//user input - menu options

	Header();
	Description();

	do
	{
		PrintMenu();
		choice = UsersChoice(1, 5);
		Exercises(choice);

	}while(choice != 5);


	return 0;
}
