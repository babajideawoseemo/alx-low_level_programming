#include "main.h"

/**
*_islower - Entry point
*@c: teh character to check
*Description: checks if lower
*by the value it receives
*Return: 1 if true and 0 if false.
*/
int _islower(int c)
{
int value = 'a';
for (value = 'a'; value <= 'z'; value++)
{
if (c == value){
return (1);
}
}
return (0);
}
