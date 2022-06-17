#include <stdio.h>
#include "main.h"

/**
* *_strncat - the function to concatenates
* @dest: the first pointer
* @src: the second pointer
* @n: number of concatenates
* Return: the concatenates
*/

char *_strncat(char *dest, char *src, int n)
{
int m = 0, num = 0;
while (dest[m++])
num++;

for (m = 0; src[m] && m < n; m++)
dest[num++] = src[m];
return (dest);
}
