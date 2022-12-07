#include <stdio.h>
#include <cs50.h>
#include <cs50.c>

int main (void)
{

    // Get numbers from user
    int x = get_int("x: ");
    int y = get_int("y: "); 
   
   // Divide x by y.  Needs to be typecasted or else x/y will truncate and only keep one integer, not decimals
    float z =(float)x/(float)y;
    printf("%f\n", z);
    printf("This program divided the two numbers.");


}