#include <stdio.h>
#include "main.h"

/**
* _puts - to print the string
* @str: the pointe
*/

void _puts(char *str)
{
while(*str)
{
putchar(*str++);
}
putchar('\n');
}
