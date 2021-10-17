# include <stdio.h>
# include "C:\Users\miwan\Desktop\Git\C-Projects\CS 50\CS50 Header Files\cs50.h"

// compare x and y

int main(void)
{
    //Prompt user for x
    int x = get_int("x: ");

    //Prompt user for y
    int y = get_int("y: ");

    //compare x and y
    if (x <y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is greater than y\n");
    }
    else
    {
    printf("x is equal to y\n");
    }


}