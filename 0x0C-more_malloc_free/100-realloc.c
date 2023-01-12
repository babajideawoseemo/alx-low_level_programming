#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block
 *@ptr:pointer 1
 *@old_size: old size byte
 *@new_size: new size
 *Return: pointer to the new array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *clone, *realloc;
unsigned int i;
if (ptr != NULL)
clone = ptr;
else
{
return (malloc(new_size));
}
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (0);
}
realloc = malloc(new_size);
if (realloc == NULL)
return (0);
for (i = 0; i < (old_size || i < new_size); i++)
{
*(realloc + 1) = clone[i];
}
free(ptr);
return (realloc);
}
