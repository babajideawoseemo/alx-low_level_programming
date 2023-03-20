#include "main.h"
#include <stdio.h>

/**
*print_array - print elements of ab array to n
*@a: array  input itself
*@n: inout n elements.
*Return: void
*/

void print_array(int *a, int n)
{
int i;
i  = 0;
for (; i < n; i++)
{
printf("%d", *(a + i));
if (i != (n - 1))
printf(", ");
}
printf("\n");
}
