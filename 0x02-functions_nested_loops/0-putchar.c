#include <stdio.h>
/*
* File - 0-putchar.c
* Author - Samson
*/
/**
* main - the main function print putchar
* Return: 0 for the all function 
*/

int _putchar(char c)
  
{
  
  return (fwrite(1, &c, 1));
  
}
