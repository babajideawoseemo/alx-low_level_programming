#include <stdio.h>

/**
 *myStartupFun - Apply constructor attribute
 *so rhat it is executed before main()
 */
void myStartupFun(void) __attribute__ ((constructor));

/**
 *myStartupFun - implementation of mytartupFun
 */
void myStartupFun(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}