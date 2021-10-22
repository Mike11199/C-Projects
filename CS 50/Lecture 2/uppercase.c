#include <stdio.h>
#include "C:\Users\miwan\Desktop\Git\C-Projects\CS 50\CS50 Header Files\cs50.h"
#include <string.h>
#include <ctype.h>

int main(void)                                       //This is the manual way to convert to uppercase with ASCII
{
    string s =get_string("Before: ");
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)  
    {
        if (s[i] >= 'a' && s[i] <='z')    
        {
            printf("%c",s[i] -32);
        } 
        else
        {
            printf("%c",s[i]);
        }    
    }
    
}

int main_toupper_function(void)
{
    string s =get_string("Before: ");
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)              //This uses the toupper() function from ctype.h header file to convert to uppercase.  It is smart enough 
{                                                           //that it doesn't need to first check if a char is lowercase.  Needs to be passed a char not a string.
        printf("%c", toupper(s[i]));
    }
    printf("\n");
    
}






