#include "main.h"

/**
 *_islower - Entry point
 *Description: checks if lower
 *by the value it receives
 *Return: 1 if true and 0 if false.
 */
int _islower(int c)
{
int value = 'a';
for (value = 'a'; value <= 'z'; value++){
if (c == value){
return (1);
}
else {
return (0);
}
}
return (0);
}
