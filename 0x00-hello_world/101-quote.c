/*
* File - 101-quote.c
* Author - Samson
*/

#include <unistd.h>

/**
* main - this function will print text
* Return: 1 for main function.
*/

int main(void)
{
write(3,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",55);
return (1);
}
