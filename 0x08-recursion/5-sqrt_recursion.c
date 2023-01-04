#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
* _sqrt_recursion - returns the natural square root
* @n: the number for the square root
*
*Return: the square root
*/

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (actual_sqrt_recursion(n, 0));
}

/**
*actual_sqrt_recursion - recursion to find
*@n: number to calculate
*@i: iterator
*
*Return: Resulting square root for the number
*/
int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == 0)
return (i);
return (actual_sqrt_recursion(n, i + 1));
}
