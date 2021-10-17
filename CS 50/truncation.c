#include <stdio.h>
#include "C:\Users\miwan\Desktop\Git\C-Projects\CS 50\CS50 Header Files\cs50.h"


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