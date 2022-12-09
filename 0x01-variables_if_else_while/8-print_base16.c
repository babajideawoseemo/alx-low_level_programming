#include <stdio.h>

/**
*main - Entry Point
*
*Return: Always 0.
*/
int main(void)
{
char b16;
for (b16 = 48; b16 <= 57; b16++)
{
putchar(b16);
}
for (b16 = 97; b16 <= 102; b16++)
{
  putchar(b16);
}
putchar('\n');
return (0);
}
