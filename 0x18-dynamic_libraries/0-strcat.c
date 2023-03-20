#include "main.h"

/**
 *_strcat - concatenate two strings
 *Description: Concatenate 2 strings
 *@dest: First string to be concatenated
 *@src: Second string to be concatenated
 *Return: string characters
 */

char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
