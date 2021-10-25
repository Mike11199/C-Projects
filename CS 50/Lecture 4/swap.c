#include <stdio.h>
#include "C:\Users\miwan\Desktop\Git\C-Projects\CS 50\CS50 Header Files\cs50.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>                                     //access to malloc


int main (void)
{
        char *s = malloc(4);
        s[0] = 'H';
        s[1] = 'I';
        s[2] = '!';
        s[3] = '\0';
        printf("%s\n", s);

        free(s);                                        //prevent memory leak

}


