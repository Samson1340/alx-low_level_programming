#include "main.h"
/**
* print_times_table - the function 
* @n: the number
* @num1: number1
* @num2: number2
* @mult: multiple
* Return: 0 and 1
*/

void print_times_table(int n)
{
int num1;
int num2;
int mult;
if (n < 15 && n > 0)
{
for (num1 = 0; num1 <= n; num1++)
{
for (num2 = 0; num2 <= n; num2++)
{
mult = num1 * num2;
_putchar(mult);
_putchar(',');
_putchar(' ');
}
_putchar("\n");
}
}
}
