#include "main.h"
/**
 * print_diagonal - print diagonal line
 * @n: input variable
 * Return: void
 */
void print_diagonal(int n)
{
	int count = 0, start = 0, end;

	if (n <= 0)
		_putchar('\n');
	else
	{

		while (count < n)
		{
			end = count;
			if (start <= end)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
				_putchar(' ');
			start++;
		}
		start = 0;
		count++;
	}
}
