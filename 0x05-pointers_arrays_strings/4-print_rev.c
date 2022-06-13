#include <stdio.h>
#include "main.h"

/**
* print_rev - to print the rev
* @s: the pointer
*/

void print_rev(char *s)
{
int length = 0, ch;
while(s[ch++])
length++;

for (ch = length - 1; ch >= 0; ch--)
putchar(s[ch]);
putchar('\n');
}
