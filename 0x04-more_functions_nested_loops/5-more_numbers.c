#include <stdio.h>
#include "main.h"

/**
* more_numbers - the display 0 to 14
* @n: the first number
*/

void more_numbers(void)
{
int count;
int n;

for (count = 0; count < 10; count++)
{
for(n = 0; n <= 14; n++)
{
putchar((n % 10) + '0');
putchar('\n');
}
}
}
