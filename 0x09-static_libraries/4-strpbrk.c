#include "main.h"

/**
 *_strpbrk - The _strpbrk() function returns the first occcurrence of a string
 *
 *@s: string where search is made
 *
 *Return: Returns a pointer in s that matches one of the bytes
 */

char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (accept[i] == *s)
return (s);
}
s++;
}
return ('\0');
}
