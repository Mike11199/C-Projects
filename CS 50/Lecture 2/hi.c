# include <stdio.h>
# include "C:\Users\miwan\Desktop\Git\C-Projects\CS 50\CS50 Header Files\cs50.h"


int main2(void)
{
    char c = '#';
    printf("%i\n", c);   //35 code for ASCII hash; go to ASCIIchart.com; implicitly cast and stored in one byte
}

int main3(void)
{
    char c1 = 'H';      //single quotes for single characters, double for strings
    char c2 = 'I';
    char c3 = '!';
    printf("%i %i %i\n", c1,c2,c3);   
}

int main(void)
{
    string s = "HI!";
    printf("%s\n", s);   //a string is an ARRAY of char characters; we can access individual characters with square brackets []
}

