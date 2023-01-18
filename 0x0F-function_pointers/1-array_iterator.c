#include <stdlib.h>
#include "function_pointers.h"

/**
 *array_iterator - executes a function and loop through
 *return value in an array
 *@array: array to iterate through
 *@size: size of the array
 *@action: pointer to function used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (!array || !action)
return;
for (i = 0; i < size; i++)
action(array[i]);
}
