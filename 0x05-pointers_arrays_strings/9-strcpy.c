#include "main.h"
#include <stdio.h>

/**
* *_strcpy - the function
* @dest: the dest
* @src: the sourc
*/

char *_strcpy(char *dest, char *src)
{
int num = 0;
while (*src != '\0')
{
dest[num] = *src;
num++;
src++;
}
return (dest);
}

