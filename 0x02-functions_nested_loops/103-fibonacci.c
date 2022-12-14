#include <stdio.h>

/**
 *main - prints sum of even fibonacci
 * fibonacci suit numbers
 *Return: return 0
*/

int main(void)
{
int num1 = 1, num2 = 2, num3, total = 0;
while (num2 < 400000)
{
if (num2 % 2 == 0)
total += num2;
num3 = num2;
num2 += num1;
num1 = num3;
}
printf("%d\n", total);
return (0);
}
