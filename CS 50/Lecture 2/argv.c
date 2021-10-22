#include <stdio.h>
#include "C:\Users\miwan\Desktop\Git\C-Projects\CS 50\CS50 Header Files\cs50.h"
#include <string.h>
#include <ctype.h>


//Programs return '0' or zero to indicate that nothing has gone wrong and all is well with a function



int main(int argc, string argv[])                            //function takes an integer and an array of strings as an input
                                                             //argc is shorthand for argument count; argv is shorthand fo argument vector (fancy word for list)
{
    if (argc ==2)                                            //single equal is an assignment operator used to assign values to variables
    {                                                        //double equal is a relational operator used to compare two variable values whether they are equal or not
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            printf("%c\n", argv[1][i]);
        }
    }      
                                   
}   



int main_v2(int argc, string argv[])                         //function takes an integer and an array of strings as an input
                                                             //argc is shorthand for argument count; argv is shorthand fo argument vector (fancy word for list)
{
    if (argc ==2)                                            //single equal is an assignment operator used to assign values to variables
{                                                            //double equal is a relational operator used to compare two variable values whether they are equal or not
        printf("hello, %s\n", argv[1]);
    }      
    else
    {
        printf("hello, world\n");
    }                                                       

}   