#include <stdio.h>
#include "C:\Users\miwan\Desktop\Git\C-Projects\CS 50\CS50 Header Files\cs50.h"


int main (void)
{
    int n;
    do
    {
        n = get_int("Width: ");
    }
     while (n < 1);

     //Print out that many question marks
     for (int i = 0; i < n; i++)
     {
         printf("?");
     }
     printf("\n");  
}
