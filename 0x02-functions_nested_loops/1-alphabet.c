#include "main.h"

/**
 *print_alphabet - Entry point
 *Description: a function that prints the alphabet,
 * in lowercase from a - z followed by a new line
 *Return: void
 */
void print_alphabet(void)
{
int i;
for(i = 'a'; i <= 'z'; i++){
_putchar(i);
}
_putchar('\n');
}
