#include <stdio.h>
#include "C:\Users\miwan\Desktop\Git\C-Projects\CS 50\CS50 Header Files\cs50.h"
#include <string.h>

//Implemntation of a data structure to store name and phone #.  Can use the '.' or dot operator to go inside the data structure and access its methods.
typedef struct 
{
    string name;
    string number;
}
person;

//Phonebook with a data structure called person
int main (void)
{
    person people[2];

    people[0].name = "Brian";
    people[0].number = "+1-617-495-1000";

    people[1].name = "David";
    people[1].number = "+1-949-468-2750";


    for (int i = 0; i < 2; i++)
    {
            if(strcmp(people[i].name, "David") == 0)
            {
                printf("Found %s\n", people[i].number);
                return 0;
            }
    }
    printf("Not found\n");
    return 1;
}



//Implemntation of a phone book with two parallel arrays (bad design as order has to be perfect)
int main_wrong_way (void)
{
    string names[] = {"Brian", "David"};
    string numbers[] = {"+1-617-495-1000", "+1-949-468-2750"};

    for (int i = 0; i < 2; i++)
    {
            if(strcmp(names[i], "David") == 0)
            {
                printf("Found %s\n", numbers[i]);
                return 0;
            }
    }
    printf("Not found\n");
    return 1;

}

