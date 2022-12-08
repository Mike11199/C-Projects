#include <stdio.h>
#include <cs50.h>
#include <cs50.c>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>                               //access to malloc

 
void swap (int *a, int *b);                       //prototype

int main (void)
{
        int x = 1;
        int y = 2;

        printf("x is %i, y is %i\n", x, y);
        swap(&x, &y);                             //pass the address of x and y
        printf("x is %i, y is %i\n", x, y);
}

 
void swap (int *a, int *b)                         //pointers as arguments
{
        int tmp = *a;                              //tmp = integer "empty glass"
        *a = *b;
        *b = tmp;                                  // stack overflow = calling a function so many times that it overflows the heap. 
}                                                  // stack on bottom, heap on top.


