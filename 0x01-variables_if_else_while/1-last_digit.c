#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main->assign a random number to a variable n each time it is executed
* and print the last digit of the nunber stored in the variable n
* Return: Always 0 (Success)
*/
int main(void) 
{
int n;
int lastDigit;
  
srand(time(0));
 
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
printf("Last digit of %d is %d ", n, lastDigit);
if(lastDigit > 5){
printf("and is greater than 5");
}
if(lastDigit == 0) {
printf("and is 0");
}
if(lastDigit < 6 && lastDigit != 0) {
printf("and is less than 6 and not 0");
}
printf("\n");
return (0);
  
}
