#include <stdio.h>
#include <unistd.h>

/**
*main - Entry point
*Description: prints two digits combination
*Return: Always 0
*/
int main(void)
{
int first_value,second_value;
for (first_value = '0'; first_value  <= '9'; first_value++)
{
for (second_value = '0'; second_value <= '9'; second_value++)
{
if (first_value < second_value)
{
putchar(first_value);
putchar(second_value);
if (first_value != '8' || (first_value == '8' && second_value != '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
