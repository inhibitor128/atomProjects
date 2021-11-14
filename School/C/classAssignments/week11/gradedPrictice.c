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
#include<stdio.h>

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
    int test1, test2, test3, sum;
    float ave;
    printf("Enter three test scores: ");
    scanf("%i %i %i", &test1, &test2, &test3);
    sum = test1 + test2 + test3;
    ave = (float)sum/3;
    printf("Student test average: %.2f\n", ave);
    return ave;
}

float inputQuizGrade(void)
{
    int quiz1, quiz2, quiz3, quiz4, quiz5, sum;
    float ave;
    printf("Enter five quiz scores: ");
    scanf("%i %i %i %i %i", &quiz1, &quiz2, &quiz3, &quiz4, &quiz5);
    sum = quiz1 + quiz2 + quiz3 + quiz4 + quiz5;
    ave = (float)sum/5;
    printf("Student quiz average: %.2f\n", ave);
    return ave;
}

float inputHomwordGrade(void)
{
    int homework1, homework2, homework3, homework4, homework5, sum;
    float ave;
    printf("Enter five homework grades: ");
    scanf("%i %i %i %i %i", &homework1, &homework2, &homework3, &homework4, &homework5);
    sum = homework1 + homework2 + homework3 + homework4 + homework5;
    ave = (float)sum/5;
    printf("Student homework average: %.2f\n", ave);
    return ave;
}
float studentFinalGrade(float testAve, float quizAve, float homeAve)
{
    float finalGrade;
    finalGrade = .5 * testAve + .3 * quizAve + .2 * homeAve;

    //printf("%.2f + %.2f + %.2f\n", ave01, ave02, ave03); for debugging
    printf("Student final grade: %.2f\n", finalGrade);
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
            homeworkAve = inputHomwordGrade();
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
