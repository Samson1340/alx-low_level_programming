#include "main.h"

/**
* _isupper - the uppercase checker function
* @c: the charactor
* Return: 0 and 1
*/

int _isupper(int c)
{
if (c > 'A' && c < 'Z')
{
return (1);
}
return (0);
}
