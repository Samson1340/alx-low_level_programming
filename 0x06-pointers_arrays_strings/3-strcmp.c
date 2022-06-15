#include "main.h"

/**
* _strcmp - the function to comper
* @s1: the first pointer
* @s2: the second pointer
* Return: the concatenates
*/

int _strcmp(char *s1, char *s2)
{
while(*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}

