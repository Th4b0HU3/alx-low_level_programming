#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the chactor c to stdout
 * @c: The charactor to print
 *
 * Return: 1 (success)
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
