#include <stdio.h>

/**
 *main - prints the sum of all multiples of 3 or 5 up to 1024
 *
 *Return: Always.
 */
int main(void)
{
int i, count = 0;
for (i = 0; i < 1024; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
count += i;
}
}
printf("%d\n", count);
return (0);
}
