#include <stdio.h>

/**
*main - Prints all lowercase except e and q
*
*Return: Always 0.
*/

int main(void)
{
char value;
for(value = 'a';value <= 'z';value++)
{
if(value != 'e' && value != 'q')
{
putchar(value);
}putchar('\n');
return (0);
}
}
