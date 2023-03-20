#include "main.h"
/**
 *rot13 - encode a string with rot13
 *@s: input string
 *Return: pointer
 */
char *rot13(char *s)
{
int count = 0, i;
char value[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
while (*(s + count) != '\0')
{
for (i = 0; i < 52; i++)
{
if (*(s + count) == value[i])
{
*(s + count) = rot13[i];
break;
}
}
count++;
}
return (s);
}
