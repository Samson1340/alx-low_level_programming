#include "main.h"

/**
* print_most_numbers - the display 0 to 9
* @n: the first number
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
_putchar((n % 10) + '0');
}
_putchar('\n');
}
