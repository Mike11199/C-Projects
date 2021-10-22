#include <stdio.h>
#include "C:\Users\miwan\Desktop\Git\C-Projects\CS 50\CS50 Header Files\cs50.h"
#include <string.h>

int main(void)
{
    string s =get_string("Input: ");
    printf("Output: ");
    for (int i = 0, n = strlen(s); i < n; i++)  //more efficient this way to put string length into a variable
    {
        printf("%c",s[i]);            
    }
    printf("\n");
}


int main_inefficient(void)
{
    string s =get_string("Input: ");
    printf("Output: ");
    for (int i = 0; i < strlen(s); i++)  //does not equal syntax; does not equal the null value at the end of a string
    {
        printf("%c",s[i]);            //strlen is a function so it's inefficinet to use in the if statement as it will be checked repeatedly
    }
    printf("\n");
}


int main_null_character(void)
{
    string s =get_string("Input: ");
    printf("Output: ");
    for (int i = 0; s[i] != '\0'; i++)  //does not equal syntax; does not equal the null value at the end of a string
    {
        printf("%c",s[i]);
    }
    printf("\n");
}

