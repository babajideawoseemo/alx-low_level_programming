#include "main.h"

/**
 *_isalpha - Entry Point
 * @c: the integer value it receives
 *Description: checks for alphabets only
 *Return: 1 if true and 0 otherwise
 */

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
