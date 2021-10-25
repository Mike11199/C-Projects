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


void draw (int h)
{
        for (int i = 1; i <= h; i++)
        {
                for (int j = 1; j <= i; j++)
                {
                        printf("#");
                }     
                printf("\n");
        }
     
}

