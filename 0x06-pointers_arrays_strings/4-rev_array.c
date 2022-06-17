#include "main.h"
#include <stdio.h>

/**
* reverse_array - reverse array
* @a: the pointer
* @n: number of byte
* Return: the copied string
*/

void reverse_array(int *a, int n)
{
int *ptr, i, x, m;
ptr = a;
for (i = 1; i < n; i++)
{
ptr++;
}
for (x = 0; x < i / 2; x++)
{
m = a[x];
a[x] = *ptr;
*ptr = m;
ptr--;
}
}  
