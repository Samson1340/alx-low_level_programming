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
int x;
for (n = 0; n < 10; n++)
{
for (m = n + 1; m < 10; m++)
{
for (x = m + 1; x < 10; x++)
{
putchar((n % 10) + '0');
putchar((m % 10) + '0');
putchar((x % 10) + '0'); 
if (n == 7)
{
continue;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
