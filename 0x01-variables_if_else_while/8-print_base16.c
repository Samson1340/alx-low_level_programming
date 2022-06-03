#include <stdio.h>
/*
* File - 8-print_base16.c
* Author - Samson
*/

/**
* main - the main function of the program
* Return: 0 for all function
*/

int main(void)
{
int n;
char ch;
for (n = 0; n < 10; n++)
{
putchar((n % 10) + '0');
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}              
