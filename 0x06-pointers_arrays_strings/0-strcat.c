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
int length, i;
length = 0;
for (i = 0; src[i] != '\0'; ++i, ++length)
dest[length] = src[i];
dest[length] = '\0';
return (dest);
}
