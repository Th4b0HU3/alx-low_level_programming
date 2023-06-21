#include "main.h"
#include <unistd.h>
/**
 *
 * _putchar - writes the charactor c to stdout
 * @c: The charactor to print
 *
 * return: On success 1
 * On error. -1 is returned, and the error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
