#include <stdio.h>
#include "main.h"

/**
* print_rev - to print the rev
* @s: the pointer
*/

void print_rev(char *s)
{
int length = 0; 

for (length = 0; *s != '\0'; length++)
s++;

s--;

for (length = length; length != 0; length--)
{
putchar(*s);
s--;
}
putchar('\n');
}
