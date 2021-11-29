/*
Objective:  Write a program to analyze the raw data from a survey using arrays and functions.

Basic Steps:
Initialize the data[100] array with random numbers from 1 to 9
Initialize the frequency[10] array with zeros
Use the frequency array to count the number of elements(1s, 2s, …)
Print the frequency table
Calculate and print the mean, median, and mode
Print the histogram
*/

//Required Lbraries
#include <stdio.h>
#include <stdlib.h>  //required to use rand()

void UpdateRandomNumbers(int A[])
{   //input integer array
    //returned: none
    //purpose: update the array passed into the function with random numbers between 1 and 99
     for(int n=0;n<100;++n)
     {
         A[n] = (int)(rand()%9) + 1;
     }
}

void PrintIntegerArray(int A[])
{
    //input integer Arrays
    //returned: none
    //purpose: print the integer array passed into the function
    printf("  Frequency Table\n");
    for(int n=0;n<9;++n)
        printf("%5i | %i \n",n +1, A[n]);

    printf("\n");
}
void PrintIntegerArray2(int A[])
{    //input integer Arrays
     //returned: none
     //purpose: print the integer array passed into the function

    for(int n=0;n<100;++n)
        printf("%5i", A[n]);

    printf("\n");
}
void CountFrequency(int A[], int F[])
{
    int num;

    for(int n=0; n<100; ++n)
    {
        num = A[n];     //++F[A[n]];
        ++F[num];
    }
}

void CountFrequency2(int A[], int F[])
{
    int num;
    int inner = 0;
    int outer = 0;
    for(int inner=0; inner<100; ++inner)
    {
        for(outer = 0; outer < 9; ++outer)
        {
            if(A[inner] == outer + 1)
            {
                ++F[outer];
            }
        }


    }
}

int main()
{

    int data[100];
    int frequency [9] = {0};
    UpdateRandomNumbers(data);
    //CountFrequency(data, frequency);


    //PrintIntegerArray2(data);
    printf("\n");
    //PrintIntegerArray(frequency);
    printf("\n");

    CountFrequency2(data, frequency);
    PrintIntegerArray(frequency);

    return 0;
}
