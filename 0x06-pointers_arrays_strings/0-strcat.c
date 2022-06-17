#include "main.h"

/**
* *_strcat - the function to concatenates
* @dest: the first pointer
* @src: the second pointer
* Return: the concatenates
*/

char *_strcat(char *dest, char *src)
{
int n = 0;
int m;
while (dest[n])
n++;
for (m = 0; src[m]; m++)
dest[n++] = src[m];
return (dest);
}
