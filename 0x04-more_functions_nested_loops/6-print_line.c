#include <stdio.h>
#include "main.h"

/**
* print_line - the function to print line
* @n: number of the line
*/

void print_line(int n)
{
int ch;

if (n > 0)
{
for (ch = 0; ch < n; ch++)
putchar('_');
}
putchar('\n');
}
