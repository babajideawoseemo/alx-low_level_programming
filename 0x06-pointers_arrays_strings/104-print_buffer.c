#include "main.h"
#include <stdio.h>

/**
 *print_buffer - prints buffer
 *@b: buffer
 *@size: size
 *Return: void
 */

void print_buffer(char *b, int size)
{
  int i1, i2, i3;
  i1 = 0;
  if (size <= 0)
    {
      printf("\n");
      return;
    }
  while (i1 < size)
    {
      i2 = size - i1 < 10 ? size - 0 : 10;
      printf("%08x: ", i1);
      for (i = 0; i < 10; i++)
	{
	  if (i3 < i2)
	    printf("%02x", *(b + i1 + i3));
	  else
	    printf(" ");
	  if (i3 % 2)
	    {
	      printf(" ");
	    }
	}
      for (i3 = 0; i3 < i2; i3++)
    }
}
