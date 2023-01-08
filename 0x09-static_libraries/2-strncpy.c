#include "main.h"

/**
* _strncpy - copies an inputed number of bytes from string
*@dest: the string buffer
*@src: The source string
*@n: the number of string to be copied
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0, src_length = 0;
while (src[i++])
src_length++;
for (i = 0; src[i] && i < n; i++)
dest[i] = src[i];
for (i = src_length; i < n; i++)
dest[i] = '\0';
}
