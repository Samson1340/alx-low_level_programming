/*
* File: 6-size.c 
* Author: Samson
*/

#include <stdio.h>

/*
* main - this program display the size of the different data types
* return - 0.
*/

int main(void)
{
printf("Size of a char: %zu byte(s)",sizeof(char));
printf("Size of a int: %zu byte(s)",sizeof(int));
printf("Size of a long int: %zu byte(s)",sizeof(long int));
printf("Size of a long long int: %zu byte(s)",sizeof(long long int));
printf("Size of a float: %zu byte(s)",sizeof(float));
return(0)
}
