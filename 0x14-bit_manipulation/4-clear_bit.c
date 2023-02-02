#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 ata given index
 *@n: num of i;
 *@index: starting from 0
 *Return: 1 if it worked
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int i;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
i = ~(1 << index);
*n = *n & i;
return (1);
}
