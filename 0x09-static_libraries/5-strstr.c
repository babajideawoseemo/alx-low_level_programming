#include "main.h"

/**
 * _strstr - The _strstr() function finds the occurrence  of the 
 *substring
 *@haystack: strung where the search is made
 *@needle: string where the search is made
 *Return: Returns a pointer to the beginning
 */

char *_strstr(char *haystack, char *needle)
{
int i;
if (*needle == 0)
return (haystack);
while (*haystack)
{
i = 0;
if (haystack[i] == needle[i])
{
do {
if (needle[i + 1] == '\0')
return  (haystack);
i++;
} while(haystack[i] == needle[i]);
}
haystack++;
}
return ('\0');
}
