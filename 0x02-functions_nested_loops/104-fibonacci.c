#include <stdio.h>
/**
* main - the main function
* Return: 0 and 1
*/
int main(void)
{
int count;
unsigned long num1 = 1, num2 = 2, sum;
for (count = 0; count < 98; count++)
{
sum = num1 + num2;
printf("%lu", sum);
num1 = num2;
num2 = sum;
if (count == 98)
printf("\n");
else
printf(", ");
}
return (0);
}
