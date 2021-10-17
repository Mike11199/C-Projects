#include <stdio.h>
#include "C:\Users\miwan\Desktop\Git\C-Projects\CS 50\CS50 Header Files\cs50.h"

//prototype tells compiler that a function exists
void meow(void);  
void meow_v2(int n); 

int main (void)
{
    for (int i =0; i<3; i++)
    {
        meow();       
        meow_v2(4);
    }
}

//put custom functions at the bottom; convention is to keep the main program at the top of the file.
void meow(void)
    {
        printf("meow\n");
    }


void meow_v2(int n)
    {
        for (int i=0; i<n; i++)
        {
        printf("meow2\n");
        }
    }

