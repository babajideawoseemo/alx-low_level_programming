#include <stdio.h>

/**
 *main - prints out first 50 fibonnacci number
 *Return: return 0;
 */

int main(void)
{
int num;
long num1 = 0; num2 = 1; num3;
for (num = 0; num < 50; num++)
{
num3 = num1 + num2;
printf("%lu", num3);
num1 = num2;
num2 = num3;
if (num == 49)
printf("\n");
else
printf(' ');
}
return (0);
}
