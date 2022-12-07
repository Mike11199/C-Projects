#include <stdio.h>
#include <cs50.h>
#include <cs50.c>


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