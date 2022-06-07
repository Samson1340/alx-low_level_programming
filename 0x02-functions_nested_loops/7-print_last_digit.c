#include "main.h"
/**
* print_last_digit - the function
* @n: decelaration 
* Return: 0 and 1
*/

int print_last_digit(int n)
{
int last = n % 10;
if (last < 0)
last *= -1;
_putchar(last + '0');
return (last);
}
