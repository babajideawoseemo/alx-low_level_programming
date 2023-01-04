#include "main.h"

/**
* check - checks for thw square root
* @a: first value
* @b: second value
*
*Return: the square root
*/

int check(int a, int b)
{
if (a * a == b)
return (a);
if (a * a > b)
return (-1);
return (check(a + 1, b));
}

/**
*_sqrt_recursion - returns the natural square root
*@n: integer to find the square root
*Return: natural square root
*/
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (check(1, n));
}
