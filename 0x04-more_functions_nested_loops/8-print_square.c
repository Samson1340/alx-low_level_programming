#include <stdio.h>
#include "main.h"

/**
* print_square - print a square
* @size: number of square
*/

void print_square(int size)
{
int num1;
int num2;
if (size > 0)
{
for (num1 = 0; num1 < size; num1++)
{
for (num2 = 0; num2 < size; num2++)
{
putchar('#');
}
if (num1 == size - 1)
continue;
putchar('\n');
}
}
putchar('\n');
}
