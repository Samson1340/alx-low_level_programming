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
int len = strlen(dest);
for(int i = 0; i < n; i++)
{
dest[len] = src[i];
len = len + 1;
}
dest[len] = '\0';
return(dest);
}

