#include <stddef.h>
#include "main.h"

/**
* _strlen - the length of the string
* @s: the pointer
* Return: the size of string
*/

int _strlen(char *s)
{
size_t length = 0;
while(*s)
length++;
return(length);
}
