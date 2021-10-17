# include <stdio.h>
# include "C:\Users\miwan\Desktop\Git\C-Projects\CS 50\CS50 Header Files\cs50.h"

int main(void)
{
    char c = get_char("Do you agree? ");
    if (c == 'y' || c== 'Y')  //need to use double equal for boolean comparison and use single quotes for char characters, as opposed to "" for string
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N')   // Two || is the equivalent of OR
    {
        printf("Not agreed.\n");
    }
}