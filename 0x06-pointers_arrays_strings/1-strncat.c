#include "main.h"

/**
*_strncat - concatenate 2 strings
*@dest: first string
*@src: second string
*@n: n value from the second string
*Return: string variable.
*/

char *_strncat(char *dest, char *src, int n)
{
int length, i;
length = 0;
for (i = 0; src[i] != '\0' && i < n; ++i, ++length)
dest[length] = src[i];
dest[length] = '\0';
return (dest);
}
