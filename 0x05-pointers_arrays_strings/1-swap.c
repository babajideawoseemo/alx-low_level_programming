#include "main.h"

/**
*swap_int - swap 2 integer values
*@a: first integer
*@b: second integer
*Return: Always nothing.
*/

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
