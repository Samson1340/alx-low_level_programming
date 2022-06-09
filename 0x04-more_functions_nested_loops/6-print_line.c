#include <stdio.h>
#include "main.h"

/**
* print_line - the function to print line
*/

void print_line(int n)
{
int ch;
for (ch = 1; ch <= n; ch++)
{
putchar('_');
}
putchar('\n');
}
