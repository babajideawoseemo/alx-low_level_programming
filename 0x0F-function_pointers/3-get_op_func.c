#include "3-calc.h"

/**
 * get_op_func - sleects the correct function to perform
 * the operation requested by the user
 * @s: car operator
 *
 *Return: pointer to the function
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (i < 10)
{
if (s[0] == ops->op[i])
break;
i++;
}
return (ops[i / 2].f);
}
