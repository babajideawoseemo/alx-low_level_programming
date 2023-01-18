#include "function_pointers.h"

/**
 *int_index - index of the integer to search
 *@array: array to search
 *@size: size of the array
 *@cmp: pointer to the function
 *Return: the index or 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
return (-1);
}
