#include <stdio.h>
#include "main.h"

/**
* print_square - print a square
* @size: the size of the square
* @num1: line control
* @num2: line2 control
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
putchar('\n');
}
}
}
