# include <stdio.h>
#include <cs50.h>
#include <cs50.c>


int main2(void)
{
    char c = '#';
    printf("%i\n", c);   //35 code for ASCII hash; go to ASCIIchart.com; implicitly cast and stored in one byte
}

int main3(void)
{
    char c1 = 'H';      //Single quotes for single characters, double for strings
    char c2 = 'I';
    char c3 = '!';
    printf("%i %i %i\n", c1,c2,c3);   
}

int main(void)
{
    string s = "HI!";
    printf("%s\n", s);   //A string is an ARRAY of char characters; we can access individual characters with square brackets []; uses fourth byte null character that represents
                        // the end of the string.  
    printf("%i %i %i %i %i\n", s[0],s[1],s[2], s[3],s[40]);  //fifth s[40] access memory outside the string
}


