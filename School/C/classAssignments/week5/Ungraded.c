/******************************************************************************

INFO.2110  Intro to C Programing - Part 1

Looping
for loops


*******************************************************************************/
#include <stdio.h>

int main()
{
    //list the numbers 1 to 10 using a for loop
    printf("print 1 to 10: ");
    for(int n =1;n<=10;++n)
    {
        printf("%5i", n);
    }
    printf("\n");
    //print the multiples of 5 up to 100
    printf("\nmultiples of 5 to 100: ");
    for(int n = 0; n <= 100; n = n +5)
        printf("%4i", n);
    printf("\n");
    //print the numbers 1 to 200
    printf("\ncount to 200: \n");
    for(int n = 1; n <= 200; ++n)
    {
        printf("%5i", n);
        if(n % 15 ==0)
            printf("\n");
    }
    printf("\n");
    //print the even numbers 1 to  50
    printf("\nprint even numbers: ");
    for(int n = 0; n <= 50; n = n + 2)
    {
        printf("%5i", n);
    }
    //print the odd numbers 1 to 50
    printf("\nprint odd numbers: ");
    for(int n = 1; n <= 50; n=n+2)
        printf("%5i", n);
    printf("\n");
    //add the numbers from 1 to 10
    printf(" \n");
    int addTen = 0;
    for(int n = 0; n <= 10; ++n)
    {
        addTen = addTen + n;
    }
    printf("\nAdd numbers from 1 to 10: %i \n", addTen);

    //Triangular numbers
    int tri = 0;
    for(int n = 1;n<=8;++n)
    {
        tri = tri + n;
    }
    printf("\nTrangular numbers: %i\n",tri);

    //8th triangular number
    tri = 0;
    for(int n = 1; n <= 8; ++n)
    {
        tri = tri + n;
    }
    printf("\n8th Trangular numbers: %i\n", tri);
    //user input for triangular numbers
    int user_num;
    tri = 0;
    printf("Enter a Trangular number: ");
    scanf("%i", &user_num);
    for(int n = 1; n <= user_num; ++n)
    {
        tri = tri + n;
    }
    printf("\nUser input Trangular numbers: %i\n", tri);
    //Table of triangular numbers for 1 to 10
    tri = 0;
    printf("\nTable of triangular numbers for 1 to 10\n");
    printf(" n   Sum from 1 to 10\n");
    for(int n = 1; n <= 10; ++n)
    {
        tri = tri + n;
        printf("%2i %8i\n", n, tri);
    }
    //multiples of 4 up to 100

    //highest number entered by the user

    //generate the numbers 0 to 99 using nested for loops

    //write a program to calculate the triangular number for 5 integers entered by the user

    // create a 3 by 3 square using a nested for loops

    //create a right triangle with 10 rows using a nested for loops



    return 0;
}
