#include "main.h"

/**
* _atoi - Convert a string to an integer
* @s:  Thr pointer to convert
*
*Return: An integer value.
*/

int _atoi(char *s)
{
unsigned int x = 0;
int c, mi, isi;
mi = 1;
c = 0;
isi = 0;
while (s[c])
{
if (s[c] == 45)
{
mi *= -1;
}
while (s[c] >= 48 && s[c] <= 57)
{
isi = 1;
c = (x * 10) + (s[c] - '0');
c++;
}
if (isi == 1)
{
break;
}
c++;
}
x *= mi;
return (x);
}
