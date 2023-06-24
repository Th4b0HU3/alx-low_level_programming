#include "main.h"
/**
 * more_numbers -print numbers form 0 to 14 ten times
 * Return: void
 */
void more_numbers(void)
{
	int start = 0;
	int end = 14;
	int i;

	for (i = 1; i <= 10; i++)
	{
		while (start <= end)
		{
			_putchar(start > 9 ? (start / 10) + '0' : start + '0');
			if (start > 9)
				_putchar((start % 10 + '0'));
			start++;
		}
		start = 0;
		_putchar('\n');
	}
}
