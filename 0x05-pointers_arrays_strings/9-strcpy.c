#include "main.h"
#include <stdio.h>

/**
* *_strcpy - the function
* @dest: the dest
* @src: the sourc
* Return: 0 and 1;
*/

char *_strcpy(char *dest, char *src)
{
int num = 0;
while (*(src + num))
{
*(dest + num) = *(src + num);
num++;
}
*(dest + num) = '\0';
return (dest);
}

