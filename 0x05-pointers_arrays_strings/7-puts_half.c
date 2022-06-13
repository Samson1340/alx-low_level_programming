#include "main.h"
#include <stdio.h>

/**
* puts_half - the function
* @str: the pointer
*/

void puts_half(char *str)
{
int n = 0, m;
while (*(str + n))
n++;
m = n / 2;
if (n % 2)
m += 1;
while (m < i)
{
putchar(*(str + m));
m++;
}
putchar('\n');
}
