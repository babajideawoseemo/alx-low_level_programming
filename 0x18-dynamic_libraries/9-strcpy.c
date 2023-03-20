#include "main.h"

/**
* *_strcpy - copies string from one array to another
*@dest: pointer to an array variable
*@src: pointer to second array variable
*Description:return the copied array
*Return: array of values.
*/

char *_strcpy(char *dest, char *src)
{
int count;
count = 0;
for (count = 0; src[count] != '\0'; ++count)
{
dest[count] = src[count];
}
dest[count] = '\0';
return (dest);
}
