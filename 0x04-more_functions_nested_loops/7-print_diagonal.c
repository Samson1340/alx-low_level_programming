#include <stdio.h>
#include "main.h"

/**
* print_diagonal - prin diagonal line
* @n: number of diagonals
*/

void print_diagonal(int n)
{
int num, num2;
if (n > 0)
{
for (num = 0; num < n; num++)
{
for (num2 = 0; num2 < num; num2++)
putchar(' ');
putchar('\\');
if (num == n - 1)
continue;
putchar('\n');
}
}
putchar('\n');
}
