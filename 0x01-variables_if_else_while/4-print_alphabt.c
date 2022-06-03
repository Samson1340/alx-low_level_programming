#include <stdio.h>
/*
* File - print_alphabt.c
* Author - Samsom
*/

/**
* main - the main function of the program
* Return: 0 for all
*/

int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'q' || ch == 'e')
{
continue;
}
putchar(ch);
}
putchar('\n');
return (0);
}
