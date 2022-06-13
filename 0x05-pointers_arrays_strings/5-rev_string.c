#include <stdio.h>
#include "main.h"

/**
* rev_string - to print the rev
* @s: the pointe
*/

void rev_string(char *s)
{
int length = 0;
for (length = 0; *s != '\0'; length++)
s++;
s--;

for (length = length; length != 0; length--)
{
putchar(*s);
s--;
}
putchar('\n');
}
                               
