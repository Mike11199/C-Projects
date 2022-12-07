#include <stdio.h>
#include <cs50.h>
#include <cs50.c>

int
main (void)
{
  printf ("Hello, world!  Installing the GCC compiler took forever!\n");
  printf ("Now I can print text in C.\n");

  string answer = get_string("What's your name? ");
  printf("My name is %s.", answer);


  return 0;
}