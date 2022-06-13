#include "main.h"
#include <stdio.h>

/**
* puts2 - the function
* @str: the pointer
*/

void puts2(char *str)
{
int num;
for (num = 0; str[num] != '\0' ; num++)
{
if ((num % 2) == 0)
putchar(*(str + num));
}
putchar('\n');
}
