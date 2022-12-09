#include <stdio.h>

/**
*main - prints all possible combinations of digit nos
*Return: Always 0 
*/
int main(void)
{
int number;
for (number = 48; number < 58; number++)
{
putchar(number);
if (number != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
