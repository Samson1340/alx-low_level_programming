#include "main.h"
/*
* File - int _islower(int c)
* Author - Samson
*/

/**
* _islower - check lowercase
* @c: declartion 
* Return: 0 if it is not 1 when it is lowercase
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
