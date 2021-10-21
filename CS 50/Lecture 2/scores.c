# include <stdio.h>
# include "C:\Users\miwan\Desktop\Git\C-Projects\CS 50\CS50 Header Files\cs50.h"


int main(void)
{
    int score1 = 72;
    int score2 = 73;
    int score3 = 33;

    //works if at least one number is a float
    printf("Average: %.5f\n", (score1 + score2 + score3) / 3.0);
}

