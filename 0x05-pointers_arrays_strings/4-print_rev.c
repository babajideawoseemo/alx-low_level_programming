#include "main.h"

/**
* print_rev - print string in reverse.
*@s: string variable pointer parameter
*Return: Always void.
*/

void print_rev(char *s)
{
int i = 0;
while (s[i] >= 0)
{
if (s[i] == '\0')
i++;
}
for (i--; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
