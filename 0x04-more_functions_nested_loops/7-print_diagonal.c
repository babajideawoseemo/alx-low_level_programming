#include "main.h"

/**
 *print_diagonal - draws a diagonal on the terminal
 *@n: number of times the character \ should be printed
 *Return: void
 */
void print_diagonal(int n)
{
int pos, num;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (pos = 1; pos <= n; pos++)
{
for (num = 1; num <= pos; num++)
{
_putchar(' ');
_putchar('\\');

}
_putchar('\n');
}
}
}
