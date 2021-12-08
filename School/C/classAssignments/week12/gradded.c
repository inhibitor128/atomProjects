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
        printf("\t%i | %i \n",n +1, A[n]);

    printf("\n");
}
void PrintIntegerArray2(int A[])
{    //input integer Arrays
     //returned: none
     //purpose: print the integer array passed into the function

    for(int n=0;n<100;++n)
        printf("%2i", A[n]);

    printf("\n");
}

void ArrayAve(int A[])
{
    int sum = 0;
    for(int n=0; n<100; ++n)
        sum = sum + A[n];

    printf("\n   Mean of Array\n\t%.2f\n", 1.0*sum/100);
}

//*****************************************8
void CountFrequency2(int A[], int F[])
{
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

void ModeFunction(int A[])
{
    int holder[9] = {1,2,3,4,5,6,7,8,9};
    int ModeTwo = 0;
    printf("   Mode of Array:\n");
    for(int n = 0; n <= 8; ++n)
    {
        if (A[n] >= ModeTwo)
        {
            ModeTwo = A[n];
            printf("\t%i\n", holder[n]);

        }
    }
}

void MedianFunction(int A[])
{
    int median;
    float medianAve;
    if (100 % 2 == 0)
    {
        printf("   Median of Array");
        medianAve = (A[100/2] + A[(100/2) - 1])/2.0;
        printf("\n\t%.2f", medianAve);
    }
	else
	{
	    median = A[(100 + 1) / 2];
	}
}

void Stars(int num)
{
    for(int n=1; n<=num; ++n)
        printf("*");
    printf("\n");
}

void Histogram(int A[])
{
    for(int n=0; n<9; ++n)
    {
        printf("[%i]: ", n +1);
        Stars(A[n]);
    }
}

int main()
{

    int data[100];
    int frequency [9] = {0};
    UpdateRandomNumbers(data);

    PrintIntegerArray2(data);
    CountFrequency2(data, frequency);
    PrintIntegerArray(frequency);
    ModeFunction(frequency);
    MedianFunction(data);
    ArrayAve(data);
    Histogram(frequency);
    return 0;
}  
