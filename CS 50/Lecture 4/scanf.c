#include <stdio.h>
#include <cs50.h>
#include <cs50.c>


int main (void)                         //custom get string from user like in cs50 library
{
        char s[4];                      //or use malloc and free
        printf("s: ");
        scanf("%s", s);                //don't need to do &s because s is fundamentally an address
        printf("s: %s\n", s);
}




int main_int (void)                         //custom get integer from user like in cs50 library
{
        int x;
        printf("x: ");
        scanf("%i", &x);
        printf("x: %i\n", x);

}

 