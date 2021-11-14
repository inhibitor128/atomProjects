/*******************************************************************************************
Name:

Graded Practice #6 GradeBook
Program Description:

Write a program to summarize and calculate one student’s grades using functions.
The program will direct the user to enter 3 Tests, 5 Quizzes, and 5 Homework grades.
The program will use a menu to allow the user to enter the information in any order.
Once all of the grades have been entered, the program will then calculate the average
for that category and return to the menu to continue entering information. Once each
category has been entered, the user can then select to calculate and print the final
student grade using the following formula:
Final grade = .5*test average + .3*quiz average + .2*homework average

The user will then quit the program
********************************************************************************************/
//Required Lbraries
#include<stdio.h>
//Function Definitions
void PrintMenu(void)
{
  	//input: none
  	//returned output: none
  	// goal:  print the menu options
		printf("\n\n *** Menu *** \n");
		printf(" 1 - Enter Tests    \n");
		printf(" 2 - Enter Quizzes  \n");
		printf(" 3 - Enter Homework \n");
		printf(" 4 - Calculate over all grade \n");
		printf(" 5 - Quit \n");
}

float inputTestGrade(void)
{
		//input: test grades
		//returned output: test average
		// goal: Calculate test average
    printf("\nInput 3 Test Grades\n");
    printf("Valid score range 0 to 100\n");
    int test1, sum = 0;
    float ave;
    for(int i =1; i<=3 ; ++i)
    {
        printf("Enter score %i: ", i);
        scanf("%i", &test1);
        if(test1 > 100 || test1 < 0)
        {
            printf("\nPlease enter a valid grade!\n");
            printf("Enter score %i: ", i);
            scanf("%i", &test1);
        }
        sum = sum + test1;
    }
    ave = (float)sum/3;
    printf("Student test average: %.2f\n", ave);
    return ave;
}

float inputQuizGrade(void)
{
		//input: quiz grades
		//returned output: quiz average
		// goal: Calculate quiz average
    printf("\nInput 5 Quiz Grades\n");
    printf("Valid score range 0 to 100\n");
    int quiz1, sum = 0;
    float ave;
    for(int i =1; i<=5 ; ++i)
    {
        printf("Enter score %i: ", i);
        scanf("%i", &quiz1);
        if(quiz1 > 100 || quiz1 < 0)
        {
            printf("\nPlease enter a valid grade!\n");
            printf("Enter score %i: ", i);
            scanf("%i", &quiz1);
        }
        sum = sum + quiz1;
    }
    ave = (float)sum/5;
    printf("Student quiz average: %.2f\n", ave);
    return ave;
}

float inputHomeworkGrade(void)
{
		//input: homework grades
		//returned output: homework average
		// goal: Calculate homework average
    printf("\nInput 5 Homework Grades\n");
    printf("Valid score range 0 to 100\n");
    int homework1, sum = 0;
    float ave;
    for(int i =1; i<=5 ; ++i)
    {
        printf("Enter score %i: ", i);
        scanf("%i", &homework1);
        if(homework1 > 100 || homework1 < 0)
        {
            printf("\nPlease enter a valid grade!\n");
            printf("Enter score %i: ", i);
            scanf("%i", &homework1);
        }
        sum = sum + homework1;
    }
    ave = (float)sum/5;
    printf("Student homework average: %.2f\n", ave);
    return ave;
}
float studentFinalGrade(float testAve, float quizAve, float homeAve)
{
		//input: average from test quiz and homework
		//returned output: final grade
		// goal: Calculate final grade
    float finalGrade;
    finalGrade = .5 * testAve + .3 * quizAve + .2 * homeAve;

    //printf("%.2f + %.2f + %.2f\n", ave01, ave02, ave03); for debugging
    printf("\nStudent final grade: %.2f\n", finalGrade);
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

void gradeBookChoice(void)
{
		//input:  validated menu choice
		//returned output:  none
		//purpose:  to redirect the program to the menu choice given by the user
    int choice = 0;
    float textAve, quizAve, homeworkAve, overAllAve;
    int exitProgram = 0;

    do
    {
        printf("Enter menu choice: ");
        scanf("%i", &choice);

        if(choice > 5 || choice < 1)
        {
            printf("Enter menu choice: ");
            scanf("%i", &choice);
        }
        switch(choice)
        {
          case 1:
            textAve = inputTestGrade();
            break;
          case 2:
            quizAve = inputQuizGrade();
            break;
          case 3:
            homeworkAve = inputHomeworkGrade();
            break;
          case 4:
            overAllAve = studentFinalGrade(textAve, quizAve, homeworkAve);
            break;
          case 5:
            exitProgram = 1;
            break;
        }
    } while (exitProgram != 1);
}

int main()
{
    PrintMenu();
    gradeBookChoice();
    Quit();

    return 0;
}
