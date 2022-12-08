#include <stdio.h>
#include <cs50.h>
#include <cs50.c>
#include <string.h>


// '&' Ampersand.  Two '&&' is the logical 'and' operator.  One '&' is the address of a variable in hexadecimal the variable is stored in. - "Figures out the address.""
// '*' The star or asterisk operator, or dereference operator, means go to the following address. - "Goes to the address.""
// %p is the format code for an address in hexadecimal as oppossed to %i for integer.

int main (void)
{
    int n = 50;
    int *p = &n;                      //'*' A pointer is a variable that contains the address of some other value. 8 bytes

    printf("%i\n", *p);               //prints the integer in the address stored in p.  integer is 4 bytes
    printf("%p\n", p);                //prints the address stored in p "hexadecimal"

}

