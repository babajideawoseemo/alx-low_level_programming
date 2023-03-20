#include "main.h"

/**
 *puts_half - prints half of a string
 *followed by a new line
 *@str: string variable to be printed
 *Return: void
 */

void puts_half(char *str)
{
int value, n, i;
value = 0;
while (str[value] != '\0')
{
value++;
}
if (value % 2 == 0)
{
for (i = value / 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}
else if (value % 2)
{
for (n = (value - 1) / 2; n < value - 1; n++)
{
_putchar(str[n + 1]);
}
}
_putchar('\n');
}
