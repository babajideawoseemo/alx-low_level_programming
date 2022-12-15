#include "main.h"

/**
 * print_triangle - print triangle
 *Description: Prints diagonals
 *@size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
int row, hash, sp;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (row = 1; row <= size; row++)
{
for (sp = size - row; sp >= 1; sp--)
{
_putchar(' ');
}
for (hash = 1; hash <= row; hash++)
{
_putchar('#');
}
_putchar('\n');
}
}
}