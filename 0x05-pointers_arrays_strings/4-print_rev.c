#include <stdio.h>
#include "main.h"

/**
* print_rev - to print the rev
* @s: the pointer 
*/

void print_rev(char *s)
{
while(*s)
{
putchar(*s--);
}
}
