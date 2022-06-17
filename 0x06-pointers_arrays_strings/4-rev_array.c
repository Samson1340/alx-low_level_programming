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
int x[800];
int i;
n--;

for (i = 0; i <= n; i++)
x[i] = a[i];

for (i = 0; i <= n; i++)
a[i] = x[n - 1];
}
