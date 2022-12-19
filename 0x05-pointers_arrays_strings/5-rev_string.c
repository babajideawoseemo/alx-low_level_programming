#include "main.h"

/**
* rev_string - return a reversed string
*@s : String characters
*Return void
*/

void rev_string(char *s)
{
char temp;
int first;
int second;
int count;
first = 0;
second = 0;
while (s[first] != '\0')
{
first++;
}
second = first - 1;
for (count = 0; count < first / 2; count++)
{
temp = s[count];
s[count] = s[second];
s[second--] = temp;
}
}
