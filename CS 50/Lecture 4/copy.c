#include <stdio.h>
#include "C:\Users\miwan\Desktop\Git\C-Projects\CS 50\CS50 Header Files\cs50.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>                                     //access to malloc


int main (void)
{
    char *s = get_string("s: ");
   
    char *t = malloc(strlen(s)+1);                      //malloc stands for memory allocation.  takes input as number for how many bytes of memory to create
    
    if (t == NULL)                                      //Null pointer or bogus address.  Different from \0 null for strings
    {
        return 1;
    }

    for (int i = 0, n = strlen(s); i <= n; i++)
        {
            t[i] = s[i];
            
        }
        if (strlen(t) > 0)
        {
            t[0] = toupper(t[0]);
        }
        

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t);                                            //opposite of malloc; sets memory back free

}


