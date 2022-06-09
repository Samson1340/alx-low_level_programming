#include "main.h"

/**
* print_numbers - the display 0 to 9
* @n: the first number
*/

void print_numbers(void)
{
int n;
for(n = 0; n <= 9; n++)
{
_putchar((n % 10) + '0');

_putchar('\n');
}
