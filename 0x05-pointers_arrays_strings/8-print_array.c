#include "main.h"
#include <stdio.h>

/**
* print_array - the fuction
* @a: the pointer
* @n: the number of elements
*/

void print_array(int *a, int n)
{
int i;
for (i = 0; i <= n; i++)
{
printf("%d, ", a[i]);
}
printf("\n");
}
