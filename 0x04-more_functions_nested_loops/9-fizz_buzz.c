#include <stdio.h>
/**
 * main - Fizz-Buzz test
 * Description: prints the number 1-100 w/
 * Fizz for multiples of 3, Buzz for multiples of 5,
 * and FuzzBuzz for multiples of both
 * Return: 0 always
 */
int main(void)
{
	int start = 1, end = 100;

	while (start <= 100)
	{
		if (start % 3 == 0)
			printf("Fizz");
		if (start % 5 == 0)
			printf("Buzz");
		if (start % 3 != 0 && start % 5 != 0)
			printf("%d", start);

		putchar(start == end ? '\n' : ' ');
		start++;
	}
	return (0);
}
