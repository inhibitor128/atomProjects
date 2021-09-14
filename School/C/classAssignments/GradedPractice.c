/**************************************************************************************
Name:
INFO.2110  Week #2
 Graded Practice Hwk #1
********************************************************************************************/

//Libraries
#include <stdio.h>	//C Library

void PartA(void)
{
	/*Write a program that asks the user to enter two whole numbers,
	and prints the sum, product, difference, quotient and remainder
	of the two numbers.*/
    printf("Part A:  \n");

    //declare variables
    int num1, num2, sum, product, difference, quotient, remaind;

    //get information from the user
    printf("Enter two whole numbers: ");
    scanf("%i %i",&num1, &num2);

    //calculations
	  sum = num1 + num2;
    product = num1 * num2;
    difference = num1 - num2;
    quotient = num1 / num2;
    remaind = num1 % num2;

	//output
  printf("\nSum: %i + %i = %i \n",num1, num2, sum);
  printf("Product: %i * %i = %i \n",num1, num2, product);
  printf("Difference: %i - %i = %i \n",num1, num2, difference);
  printf("Quotient: %i / %i = %i \n",num1, num2, quotient);
  printf("Remainder: %i %% %i = %i \n",num1, num2, remaind);

  printf("\nEnd of program\n\tHave a nice day!!!   \n");
}

void PartB(void)
{
	/*Part A and write a program that gets three different whole numbers
	from the user, then prints the sum, the average, the product of
	these numbers.*/
	printf("Part B:  \n");

    //declare variables
    int num1, num2, num3, sum, average, aveRemander, product;

    //get information from the user
    printf("Enter three whole numbers: ");
    scanf("%i %i %i",&num1, &num2, &num3);

    //calculations
    sum = num1 + num2 + num3;
    average = (num1 + num2 + num3) / 3;
    aveRemander = (num1 + num2 +num3) % 3;
    product = num1 * num2 * num3;

	//output
  printf("\nSum: %i + %i + %i = %i\n", num1, num2, num3, sum);
  printf("Average: (%i + %i + %i) / 3 = %i R %i\n", num1, num2, num3, average,aveRemander);
  printf("Product: %i * %i * %i = %i\n", num1, num2, num3, product);

  printf("\nEnd of program\n\tHave a nice day!!!   \n");

}

void PartC(void)
{
	/*Part A & B and write a program that reads in the radius of a circle
	and prints the circle's diameter, circumference and area.  Declare and use the
	constant value 3.14159 for Pi.  All calculations should occur outside
	the printf statement(s) and use the formatted conversion %.2f for float variables.  */
	printf("Part C:  \n");

	//declare variables
    float Pi = 3.14159;
    int radius;
    int diameter;
    float circumference;
    float area;

    //get information from the user
    printf("Please enter a whole number for a radius: ");
    scanf("%i",&radius);

    //calculations
    diameter = radius * 2;
    circumference = Pi * diameter;
    area = Pi* radius * radius;

	//output
    printf("\ndiameter: %i * 2 = %i\n", radius, diameter);
    printf("circumference: %.2f * %i = %.2f\n", Pi, diameter, circumference);
    printf("area: %.2f * %i^2 = %.2f\n", Pi, radius, area);
    printf("\nEnd of program\n\tHave a nice day!!!   \n");

}

void PartD(void)
{
	/*	Part A, B, & C and write a program that calculates the student average based on
	the following where the user enters 3 values, the program adds the values up and
	then displays the student average.   */
	printf("Part D:  \n");

	//declare variables
    float numGrade1, numGrade2, numGrade3, average;

    //get information from the user
    printf("Enter the number grade of your last three classes: ");
    scanf("%f %f %f", &numGrade1, &numGrade2, &numGrade3);

    //calculations
    average = (numGrade1 + numGrade2 + numGrade3) / 3;

	//output
    printf("\nStudent average: %.2f \n", average);
    printf("\nEnd of program\n\tHave a nice day!!!   \n");

}

int main(void)
{
	PartA();
	PartB();
	PartC();
	PartD();

	return 0;
}
