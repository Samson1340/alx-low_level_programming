#include "main.h"

/**
* swap_int - the function to swap
* @a: the first pointer
* @b: the scond pointer
*/

void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
