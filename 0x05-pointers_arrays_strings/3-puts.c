#include <stdio.h>
#include "main.h"

/**
* _puts - to print the string
* @str: the pointer
*/

void _puts(char *str)
{
int n;
for (n = 0; str[n] < '\0'; ++n)
{
putchar(str[n]);
}
putchar('\n');
}
