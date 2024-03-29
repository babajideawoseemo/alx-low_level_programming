#include "variadic_functions.h"

/**
 * print_strings - Prints strings to the function separated by separators
 *@separator: A string that is used to separate stirngs
 *@n: number of parameters
 *Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
char *str;
unsigned int i;
va_list a;
va_start(a, n);
if (separator == NULL)
separator = "";
for (i = 0; i < n; i++)
{
str = va_arg(a, char*);
if (str == NULL)
str = "(nil)";
printf("%s", str);
if (i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(a);
}
