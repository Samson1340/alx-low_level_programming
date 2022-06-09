#include <stdio.h>
#include "main.h"

/**
* print_numbers - the display 0 to 9
*/

void print_numbers(void)
{
int n;

for (n = 0; n <= 9; n++)
putchar((n % 10) + '0');

putchar('\n');
}
