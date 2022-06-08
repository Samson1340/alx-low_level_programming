#include "main.h"

/**
* print_to_98 - the function to print 
* @n: the starting number
* Return: 0 and 1
*/

void print_to_98(int n)
{
int start;
if(n <= 98)
{
for(start = n; start <= 98; start++)
{
printf(start);
printf(',');
printf(' ');
}
}
else
{
for(start = n; start >= 98; start--)
{
printf(start);
printf(',');
printf(' ');
}
}
}
