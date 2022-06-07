#include "main.h"
/*
* File - int _islower(int c)
* Author - Samson
*/

/**
* int _islower - check lowercase 
* Return: 0 if it is not 1 when it is lowercase
*/

int _islower(int c)
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'c')
{
return (1);
}
else
{
return (0);
}
}
}
