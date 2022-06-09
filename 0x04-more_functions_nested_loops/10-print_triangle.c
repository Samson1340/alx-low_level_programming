#include "main.h"

/**
* print_triangle - it print triangle
* @size: size of triangle
*/

void print_triangle(int size)
{
int num, space;
if (size > 0)
{
for (num = 1; num <= size; num++)
{
for (space = size - num; space > 0; space--)
putchar(' ');
for (space = 0; space < num; space++)
putchar('#');
if (num == size)
continue;
putchar('\n');
}
}
putchar('\n');
}

