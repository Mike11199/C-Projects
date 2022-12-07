#include <stdio.h>
#include <cs50.h>
#include <cs50.c>

//this is an example of floating point imprecision

int main (void)
{
   float x = get_float("x: ");
   float y = get_float("y: ");

    printf("%.50f\n", x/y);


}

