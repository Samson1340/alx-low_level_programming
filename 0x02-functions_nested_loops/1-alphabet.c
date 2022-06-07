#include <stdio.h>
#include "main.h"
/*
* File - the function print alphabet
* Author - Samson
*/

/**
* print_alphabet - prints the alphabet
* Return: 0 for the function
*/

void print_alphabet(void)
{
  char ch = 'a';
  for (ch = 'a'; ch <= 'z'; ch++)
    {
      putchar(ch);
    }
  putchar('\n');
}
