#include "main.h"

/**
* _strcmp - the function to comper
* @s1: the first pointer
* @s2: the second pointer
* Return: the concatenates
*/

int _strcmp(char *s1, char *s2)
{
int result, i;
for (i = 0; s1[i] != '\0'; i++)
{
if (s1[i] == s2[i])
result = (s1[i] - '0') - (s2[i] - '0');
else
{
result = (s1[i] - '0') - (s2[i] - '0');
break;
}
}
return (result);
}
