#include <stdio.h>
#include "main.h"

/**
* _puts - to print the string
* @str: the pointer
*/

void _puts(char *str)
{
int n;
while(*str)
{
putchar(*str++);
}
putchar('\n');
}
