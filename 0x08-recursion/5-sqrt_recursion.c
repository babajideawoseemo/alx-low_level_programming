#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - main function
 *@n - int n
 *Description: get value
 * Return: the tesulting square root
*/

int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

/**
 * _sqrt - square root recursion
 *@n - Number to calculate the square root of
 *@i - iterator
 *Return: square root of the number
 */
int _sqrt(int n, int i)
{
if (n < 0)
return (-1);
if ((i * i) > n)
return (-1);
if (i * i == n)
return (i);
return (_sqrt(n, i + 1));
}
