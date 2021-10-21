# include <stdio.h>
# include "C:\Users\miwan\Desktop\Git\C-Projects\CS 50\CS50 Header Files\cs50.h"

//Prototype
int get_negative_int(void);

int main(void)
{
    //Get negative integer from use
    int i = get_negative_int();
    printf("%i\n", i);
}


int get_negative_int(void)
{
    int n;
    do
    {
        n=get_int("Negative Integer: ");
    }
    while (n >= 0);
    return n;
}