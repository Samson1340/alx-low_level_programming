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
int n1, m1;
for (n1 = 0; *dest != '\0'; n1++)
{
continue;
}
for (m1 = 0; src[m1] != '\0' && m1 < n; m1++)
{
dest[n1 + m1] = src[m1];
}
dest[n1 + m1] = '\0';
return (dest);
}
