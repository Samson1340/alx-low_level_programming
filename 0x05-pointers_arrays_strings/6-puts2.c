#include "main.h"
#include <stdio.h>

/**
* puts2 - the function
* @str: the pointer
*/

void puts2(char *str)
{
int num = 0;
while (*(str + num))
{
putchar(*(str + num));
num = num + 2;
}
putchar('\n');
}
