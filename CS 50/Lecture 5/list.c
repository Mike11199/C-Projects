#include <stdio.h>
#include <cs50.h>
#include <cs50.c>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>                                      //access to malloc



//Linked lists are more efficient than arrays as you don't have to copy your original array into a new array each time.  You can grow and shrink the data.
// They are a series of nodes that are connected via pointers.  So don't have to be contiguous as an array in C.  Running time of searching a linked list is O(n).  
//Inserting into a linked list is O(1).

//Running time of inserting into an array is linear time O(n) or omega(1) if already empty as lower.
//Always check if NULL if calling a function that returns to you a pointer!!

//Instead of  (*n).number = 1; can use the -> syntactic sugar.  
//vector is an array that can be resized or shrinked.  This is NOT what arrays are in C.



//This is an example of resizing an array.  NOT a linked list:

int main (void)                                       
{     
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }
   
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    int *tmp = realloc(list, 4 * sizeof(int));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    tmp[3] = 4;
    list = tmp;
    
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }
    
    free(list);

}
