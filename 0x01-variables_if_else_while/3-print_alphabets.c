#include <stdio.h>
/*
* File - 3-print_alphabets.c
* Author - Samson
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
putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}              
