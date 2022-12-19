#include "main.h"

/**
*puts2 - Print the characters of a string
*@str: the string variable
*Return: void
*/

void puts2(char *str)
{
int i, value;
value = 0;
while (str[value] != '\0')
{
value++;
}
for (i = 0; i < value; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
