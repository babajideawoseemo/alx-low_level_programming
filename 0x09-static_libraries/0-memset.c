#include "main.h"

/**
*_memset - The _memset() fills n bytes with b
*@s: target
*@b: constant byte
*@n: nunber of byte
*Return: return a new value
*/

char *_memset(char *s, char b, unsigned int n)
{
while (n)
{
s[n - 1] = b;
n--;
}
return (s);
}
