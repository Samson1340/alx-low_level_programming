#include <stdio.h>
#include "main.h"

/**
* print_most_numbers - the display 0 to 9
*/

void print_most_numbers(void)
{
int n;
for(n = 0; n <= 9; n++)
{

if (n == 2 || n == 4)
{
continue;
}
putchar((n % 10) + '0');
}
putchar('\n');
}
