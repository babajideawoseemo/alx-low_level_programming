#include "3-calc.h"

/**
 *op_add - adds 2 numbers
 *@a: first number
 *@b: second number
 *
 *Return: added number
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 *op_sub - subtrat
 *@a: first number
 *@b: second number
 *
 *Return: the difference 
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 *op_mul - multiplies 2 numbers
 *@a: first number
 *@b: second number
 *
 *Return: multiplication
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 *
op_div - divides 2 numbers
*@a: first number
*@b: second number
*
*Return: division
*/
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
*op_mod - calculates modulus of 2 numbers
*@a: first number
*@b: second number
*
*Return: remainder of the division
*/
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
