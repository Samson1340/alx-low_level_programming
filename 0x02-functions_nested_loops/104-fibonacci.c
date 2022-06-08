#include <stdio.h>
/**
* main - the main function
* Return: 0 and 1
*/
int main(void)
{
int count;
unsigned long num1 = 1, num2 = 2, sum;
printf("%lu, %lu, ", num1, num2);
for (count = 0; count < 97; count++)
{
sum = num1 + num2;
printf("%lu", sum);
num1 = num2;
num2 = sum;
if (count == 97)
printf("\n");
else
printf(", ");
}
return (0);
}
