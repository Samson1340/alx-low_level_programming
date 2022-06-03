#include <stdio.h>
/*
* File - 100-print_comb3.c
* Author - Samson
*/

/**
* main - the main function of the program
* Return: 0 for all function
*/

int main(void)
{
int n;
int m;
for (n = 0; n < 10; n++)
{
for (m = n+1; m < 10; m++)
{
putchar((n % 10) + '0');
putchar((m % 10) + '0');
if (n == 8)
{
continue;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
