#include <stdio.h>
#include "C:\Users\miwan\Desktop\Git\C-Projects\CS 50\CS50 Header Files\cs50.h"
#include <string.h>


int main (void)
{
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    printf("%p\n", s);
    printf("%p\n", t);


    if (strcmp(s,t) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

}


