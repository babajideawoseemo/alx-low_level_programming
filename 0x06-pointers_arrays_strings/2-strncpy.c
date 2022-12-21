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
int i;
i = 0;
while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
