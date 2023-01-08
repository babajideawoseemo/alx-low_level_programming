#include "main.h"

/**
*_isupper - function to verify uppercase
*@c: tested character
*Return: return 1 for true and o for false if uppercase
*/

int _isupper(int c)
{
if ((c >='A') && (c <= 'Z'))
return (1);
return (0);
}
