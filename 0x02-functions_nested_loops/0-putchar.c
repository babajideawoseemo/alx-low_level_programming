#include "main.h"

/**
*main - Entry Point
*'
*Return: return nothing. void.
*/
int main(void)
{
char stringValue[] = "_putchar\n";
int i = 0;
for (i = 0; i < strlen(stringValue);i++)
{
_putchar(stringValue[i]);
}
return (0);
