/**************************************************************************************
Name: J G
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
    printf("\t\t\tPart A:  \nFind the Sum, Product, Difference, Quotient & Remainder\n");

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
  printf("\nEnd of program   \n");
}

void PartB(void)
{
	/*Part A and write a program that gets three different whole numbers
	from the user, then prints the sum, the average, the product of
	these numbers.*/
	printf("\t\t\tPart B: \nFind the sum, average and product of three numbers  \n");

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
  printf("\nEnd of program   \n");

}

void PartC(void)
{
	/*Part A & B and write a program that reads in the radius of a circle
	and prints the circle's diameter, circumference and area.  Declare and use the
	constant value 3.14159 for Pi.  All calculations should occur outside
	the printf statement(s) and use the formatted conversion %.2f for float variables.  */
	printf("Part C:  \n");

	//declare variables
  const float Pi = 3.14159;
  float radius ,diameter, circumference, area;

    //get information from the user
    printf("Please enter a number for a radius: ");
    scanf("%f",&radius);

    //calculations
    diameter = radius * 2;
    circumference = Pi * diameter;
    area = Pi* radius * radius;

	//output
  printf("\ndiameter: %.2f * 2 = %.2f\n", radius, diameter);
  printf("circumference: %.2f * %.2f = %.2f\n", Pi, diameter, circumference);
  printf("area: %.2f * %.2f^2 = %.2f\n", Pi, radius, area);
  printf("\nEnd of program   \n");

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
    printf("Enter homework grade (700 max): ");
    scanf("%f", &numGrade1);
    printf("Enter medterm grade (150) : ");
    scanf("%f", &numGrade2);
    printf("Enter grade of your final exam (150 max): ");
    scanf("%f", &numGrade3);

    //calculations
    average = (numGrade1 + numGrade2 + numGrade3) / 10;

	//output
  printf("\nStudent Grade: %.2f \n", average);
  printf("\nEnd of program   \n");

}

int main(void)
{
	PartA();
	PartB();
	PartC();
	PartD();

	return 0;
}
