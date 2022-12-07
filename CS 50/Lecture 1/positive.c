// Abstraction and scope

#include <stdio.h>
#include <cs50.h>
#include <cs50.c>


int get_positive_int (void);

int main (void)
{
    int i = get_positive_int();
    printf("%i\n", i);
}



//Prompt user for positive integer
int get_positive_int (void)
{
    int n;                                  //declare variable here
    do
    {
        n = get_int("Positive Integer: ");  //can't declare n inside curly braces as won't exist outside of it due to scope
    } 
    while (n<1);
    return n;
}