#include "main.h"

/**
*print_line - pr8nt straight line
*@n: no of times
*Result:  Always 0.
*/

void print_line(int n)
{
int ptr;
if (n <= 0)
_putchar('\n');
else
{
for (ptr = 1; ptr <= n; ++ptr)
{
_putchar('_');
}
 _putchar('\n');
}
}
