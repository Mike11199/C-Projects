#include <stdio.h>
#include "C:\Users\miwan\Desktop\Git\C-Projects\CS 50\CS50 Header Files\cs50.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>                                      //access to malloc


typedef struct node
{
    int number;
    struct node *next;
}
node;

int main (void)                                       
{     
    node *list = NULL;                  //initialize pointer to something
    node *n = malloc(sizeof(node));     //allocate a temporary node using malloc with another room for an integer and another node
    if (n == NULL)
    {
        return 1;
    }
    n->number = 1;                       // Allows access to the members of a structure using pointers.  Short for (*n).number and combines the dot and * operators
    n->next = NULL;
    list = n;



    n = malloc(sizeof(node));
    if (n==NULL)
    {
        free(list);
        return 1;
    }
    n->number =2;
    n->next = NULL;
    list->next = n;



    n = malloc(sizeof(node));
    if (n==NULL)
    {
        free(list);
        return 1;
    }
    n->number =3;
    n->next = NULL;
    list->next->next = n;


    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%i\n", tmp ->number);
    }




}
