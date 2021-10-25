#include <stdio.h>
#include "C:\Users\miwan\Desktop\Git\C-Projects\CS 50\CS50 Header Files\cs50.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>                               //access to malloc


void draw (int h);

int main (void)
{
        int height = get_int("Height: ");
        draw(height);


}


void draw (int h)                               //recursion that calls itself.  once h = 0, after calling itself h-1 times, the return brings it to line 28
{
        if ( h == 0)
        {
                return;                         //base case to prevent stack overflow and hitting the heap
        }
       
        draw (h-1);                             //this is the recursive element

        for (int i = 0; i < h; i++)
        {
                printf("#");
        }
        printf("\n");
     
}

