#include "main.h"
/**
 * print_line - Function that draws a straight line
 * @n: number of lines
 * Return: 0 (success)
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
