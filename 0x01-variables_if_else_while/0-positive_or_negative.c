#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
* File - 0-positive_or_negative.c
* Author - Samson
*/

/**
* main - the main function of the program
* Return: 0 for all
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n > 0)
{
printf("%d is positive\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
