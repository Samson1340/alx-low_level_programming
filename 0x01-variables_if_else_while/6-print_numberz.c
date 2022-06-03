#include <stdio.h>
/*
* File - 5-print_numbers.c
* Author - Samson
*/

/**
* main - the main function of the program
* Return: 0 for all function
*/

int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
putchar((n % 10) + '0');
}
putchar('\n');
return (0);
}                    
