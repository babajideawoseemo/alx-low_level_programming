#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *@n: n is an integer
 *Descriptioj: prints the last difit in a number
 *Result: Alwways 0.
 */

int print_last_digit(int n)
{
int lastDigit = n % 10;
if (n < 0)
{
lastDigit = lastDigit * -1;
}
_putchar(lastDigit + '0');
return (lastDigit);
}
