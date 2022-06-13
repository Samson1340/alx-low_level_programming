#include "main.h"

/**
* _strlen - the length of the string
* @s: the pointer
*/

int _strlen(char *s)
{
int length = 0;
while(*s)
length++;
return(length);
}
