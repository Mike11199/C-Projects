# include <stdio.h>
# include "C:\Users\miwan\Desktop\Git\C-Projects\CS 50\CS50 Header Files\cs50.h"

const int TOTAL = 3;

float average(int length, int array[]);

int main(void)
{ 
    int scores[TOTAL];   //square brackets declares an array, creates three starting at zero
    for (int i=0; i<TOTAL; i++)
    {
        scores[i]=get_int("Score: ");
    }
    //works if at least one number is a float
    printf("Average: %.5f\n", average(TOTAL,scores));
}


float average(int length, int array[])
{
    int sum = 0;
    for (int i=0; i<length; i++)
    {
        sum = sum + array[i];
    }
    return sum /(float)length;  //at least one has to be float if returning float, can't divide two integers
}