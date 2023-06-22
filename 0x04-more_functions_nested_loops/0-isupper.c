#include "main.h"

/**
 * _isupper - evaluate if the letter is uppercase
 * @c: print int
 * Return: 0 (success)
 */

int _isupper(int c)
{

int start = 65, end = 90;
if (c >= start && c <= end)
	return (1);
return (0);
}
