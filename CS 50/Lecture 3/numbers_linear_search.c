#include <stdio.h>
#include "C:\Users\miwan\Desktop\Git\C-Projects\CS 50\CS50 Header Files\cs50.h"


//Binary search is fastest but requires sorted data (cutting phonebook in half example)

//Implementation of linear search algorithm
int main (void)
{
    int numbers[] = {4,6,8,2,7,5,0};

    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n"); 
    return 1;
}

