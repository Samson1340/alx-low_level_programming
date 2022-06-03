#include <stdio.h>
/*
* File - 2-print_alphabet.c
* Author - Samson 
*/

/**
* main - the main function of the program
* Return: 0 for all
*/

int main(void)
{
char ch;
for (ch = 'z'; ch <= 'a'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
