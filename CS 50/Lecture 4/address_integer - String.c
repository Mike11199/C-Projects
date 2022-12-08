#include <stdio.h>
#include <cs50.h>
#include <cs50.c>
#include <string.h>


int main (void)
{
    char *s = "HI!";                  //pointer arithmetic to go to the next byte
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
    printf("%i\n", *(s+3));

    for (int i=0; i<3; i++)
    {
        printf("%s\n", s);
    }

}



int main_previous (void)
{
    string s = "HI!";                 //s is a pointer to the first character of the string.  Each character of a string is back to back ending in null.
    printf("%p\n", s);                //In C, strings exist as "char *s".  The address of a character.
  
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
}


