#include <stdio.h>
#include <cs50.h>
#include <cs50.c>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>                               //access to malloc




int main (void)                         
{
        FILE *file = fopen("phonebook.csv", "a");
        if (file == NULL)
        {
                return 1;
        }

        char *name = get_string("Name: ");
        char *number = get_string("Number: ");

        fprintf(file, "%s,%s\n", name, number);
        fclose(file);

}

