#include <stdio.h>
/**
* main - the main function
* Return: 0 and 1
*/
int main(void)
{
float total;
unsigned long num1 = 0, num2 = 1, sum;
while (1)
{
sum = num1 + num2;
if (sum > 4000000)
break;
if ((sum % 2) == 0)
total = total + sum;
num1 = num2;
num2 = sum;
}
printf("%.0f\n", total);
return (0);
}
