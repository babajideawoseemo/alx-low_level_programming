#include "main.h"

/**
 *_strncpy - Copies at most an inputed number
 *bytes from src string to dest.
 *@dest: The buffer storing the string copy.
 *@src: The source string.
 *@n: The max no of bytes to be copied from src
*to dest.
*Return: string.
*/

char *_strncpy(char *dest, char *src, int n)
{
int i, length;
length  = 0;
while (src[i++])
length++;
for (i = 0; src[i] && i < n; i++)
dest[i] = src[i];
for (i = length; i < n; i++)
dest[i] = '\0';
return (dest);
}
