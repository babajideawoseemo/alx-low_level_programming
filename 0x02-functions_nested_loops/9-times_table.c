#include "main.h"

/**
 *times_table - a function that prints the 9 tikes table, starting with 0
 *Return: times table
 */
void times_table(void)
{
int r, c, d;
for (r = 0; r < 10; r++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
for (c = 1; c < 10; c++)
{
d = r * c;
if ((d / 10) > 0)
{
_putchar((d / 10) + 48);
}
else
{
_putchar(' ');
}
_putchar((d % 10) + 48);
if (c < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
