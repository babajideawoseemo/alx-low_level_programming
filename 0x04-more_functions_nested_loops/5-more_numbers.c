#include "main.h"

/**
*more_numbers - print 10 tines the number from 0 to 14
*Return: Always 0
*/

void more_numbers(void)
{
int count;
 int first;
int second;
int result;
count = 0;
result = 0;
for (count = 0; count < 10; count++)
{
for (result = 0; result <= 14; result++)
{
if (result < 10)
{
second = result;
}
else
{
first = result / 10;
second = result % 10;
_putchar(first + '0');
}
_putchar(second + '0');
result++;
}
result = 0;
_putchar('\n');
}
}
