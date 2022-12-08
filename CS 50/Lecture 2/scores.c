#include <stdio.h>
#include <cs50.h>
#include <cs50.c>


int main(void)
{
    int score1 = 72;
    int score2 = 73;
    int score3 = 33;

    //works if at least one number is a float
    printf("Average: %.5f\n", (score1 + score2 + score3) / 3.0);
}

