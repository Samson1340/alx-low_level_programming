#include "main.h"

/**
* *_strcat - the function to concatenates
* @dest: the first pointer
* @src: the second pointer
* Return: the concatenates
*/

char *_strcat(char *dest, char *src)
{
char* n = dest + strlen(dest);

while (*src != '\0')
{
*n++ = *scr++;
}
*n = '\0';
return (dest);
}
