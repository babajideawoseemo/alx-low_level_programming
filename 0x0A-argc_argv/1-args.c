#include <stdio.h>

/**
 * main - prints the number of arguments
 *@argc:  count of argument
 *@argv: array of args
 *Return: the number of argument
 */

int main(int argc, char __attribute__ ((__unused__)) *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
