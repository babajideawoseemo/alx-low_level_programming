#include "main.h"

/**
*jack_bauer - prints minute for jack bauer
* from 00 to 23 59
*Return: void.
*/
void jack_bauer(void)
{
int hrs, min;
for (hrs = 0; hrs < 24; hrs++)
{
for (min = 0; min < 60; min++)
{
_putchar((hrs / 10) + '0');
_putchar((hrs % 10) + '0');
_putchar(':');
_putchar((min / 10) + '0');
_putchar((min % 10) + '0');
_putchar('\n');}
}
}
