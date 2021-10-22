#include <stdio.h>
#include "C:\Users\miwan\Desktop\Git\C-Projects\CS 50\CS50 Header Files\cs50.h"
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])                   //type 'echo $?' to show the exit status in the command line interface (CLI)
{
    if (argc != 2)
    {
        printf("missing command-line argument\n");
        return 1;

    }
    printf("hello, %s\n", argv[1]);
    return 0;
}

