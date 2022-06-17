#include "main.h"
#include <stdio.h>

/**
* *_strncpy - copy a string
* @dest: the pointer
* @src: the pointer
* @n: number of byte
* Return: the copied string
*/

char *_strncpy(char *dest, char *src, int n)
{
int m;
for (m = 0; m < n && src[m] != '\0'; m++)
{
dest[m] = src[m];
for ( ; m < n; m++)
dest[m] = '\0';
return (dest);
}
}
