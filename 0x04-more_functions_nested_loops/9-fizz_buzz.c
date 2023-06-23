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
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
