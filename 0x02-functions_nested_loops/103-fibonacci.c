#include <stdio.h>

/**
 *main - prints sum of even fibonacci
 * fibonacci suit numbers
 *Return: return 0
*/

int main(void)
{
unsigned long num1 = 0, num2 = 1, num3 = 0, total = 0;
while (num3 < 400000)
{
num3 = num2 + num1;
num1 = num2;
num2 = num3;
if ((num1 % 2) == 0)
total += num1;
}
printf("%ld\n", total);
return (0);
}
