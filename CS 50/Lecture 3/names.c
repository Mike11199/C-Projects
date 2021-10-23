#include <stdio.h>
#include "C:\Users\miwan\Desktop\Git\C-Projects\CS 50\CS50 Header Files\cs50.h"
#include <string.h>


//Implementation of linear search algorithm with text
int main (void)
{
    string names[] = {"Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"};

    for (int i = 0; i < 7; i++)
    {
        if (strcmp(names[i], "Ron") == 0)             //If two strings are equal, this returns 0.  If first string is before second, then return negative number; after is positive number.
        {                                             //Compares every character in two strings by ASCII value, and compares each ASCII char by char.  e.g- a=65 compared to a=65 in 2nd string.
             printf("Found\n");  
             return 0;
                                                      // Stops when it hits the null character '\0'
        }                                             // Any value other than 0 is true in a boolean
    }
    printf("Not Found\n");
    return 1;
}

