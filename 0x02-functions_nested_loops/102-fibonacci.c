#include <stdio.h>
/**
* main - the main function 
* @num1: number one 
* @num2: number two 
* @sum: the sum 
* @count: the count
*/

int main(void)
{
int count;
int num1 = 0, num2 = 1, sum;
for (count = 0; count < 50; count++)
{
sum = num1 +num2;
printf("%d", sum);
num1 = num2;
num2 = sum;
if (count == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
