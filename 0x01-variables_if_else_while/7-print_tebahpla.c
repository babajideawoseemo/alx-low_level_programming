#include <stdio.h>

/**
*main - Entry Point
*
*Return: Always 0.
*/
int main(void)
{
char value;

for (value = 122; value >= 97; value--)
{
putchar(value);
}
putchar('\n');
return (0);
}
