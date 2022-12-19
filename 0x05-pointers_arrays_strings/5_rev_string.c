#include "main.h"

/**
 * rev_string - reverese a string
 * @s: string to  be reversed
 */

void rev_string(char *s)
{
char temp;
int i, first, second;
first = 0;
second = 0;
while (s[first] != '\0')
{
first++;
}
second = first - 1;
for (i = 0; i < first / 2; i++)
{
temp = s[i];
s[i] = s[second];
s[second--] = temp;
}
}
