#include <stdlib.h>
#include "main.h"

/**
* *string_nconcat - concatenates n byte of a string to another
 *@s1: string to append to
 *@s2: string to concat from
 *@n: number of bytes from s2 to concat s1
 * Return: pointer to the new string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int len = n, index;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (index = 0; s1[index] ; index++)
len++;
concat = malloc(sizeof(char) * (len + 1));
if (concat == NULL)
return (NULL);
len = 0;
for (index = 0; s1[index]; index++)
concat[len++] = s1[index];
for (index = 0; s2[index] && index < n; index++)
concat[len++] = s2[index];
concat[len] = '\0';
return (concat);
}
