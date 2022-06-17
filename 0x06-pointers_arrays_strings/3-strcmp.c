#include "main.h"

/**
* _strcmp - the function to comper
* @s1: the first pointer
* @s2: the second pointer
* Return: the concatenates
*/

int _strcmp(char *s1, char *s2)
{
int pr, m;
for (m = 0; s1[m] != '\0'; m++)
{
if (s1[m] == s2[m])
pr = (s1[m] - '0') - (s2[m] - '0');
else
{
pr = (s1[m] - '0') - (s2[m] - '0');
break;
}
}
return (pr);
}
