#include "main.h"

/**
*print_sign -  Entry Point
*@n: Print the variable
*Description: prints the sign of a number
*Return: 1 if n>0, 0 if n=0 and -1 if n<0
*/
int print_sign(int n)
{
if(n > 0){
_putchar('+');
return (1);
}
else if (n == 0){
_putchar(48);
return (0);
}
else if (n < 0) {
_putchar('-');
return (-1);
}
}
