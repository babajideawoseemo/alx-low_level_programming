#include "main.h"

/**
*_atoi - convert to integer
*@s: tge string pointer
*Return: new array.
*/

int _atoi(char *s)
{
unsigned int num;
int i;
i = 1;
num = 0;
do {
if (*s == '-')
i *= -1;
else if (*s >= '0' && *s <= '9')
num = num * 10 + (*s - '0');
else if (num > 0)
break;
} while (*s++);
return (num *i);
}
