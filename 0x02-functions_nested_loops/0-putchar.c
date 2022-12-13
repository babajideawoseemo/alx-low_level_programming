#include "main.h"

/**
*main - Entry Point fo the program to print putchar
*Description: prints '_putchar'
*Return: Always 0.
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
