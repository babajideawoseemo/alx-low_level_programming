#include "main.h"

/**
* get_endianness - checks the endianness
*
*Return: 0 if big notation
*/

int get_endianness(void)
{
int i;
char *c;
i = 1;
c = (char *)&i;
return (*c);
}
