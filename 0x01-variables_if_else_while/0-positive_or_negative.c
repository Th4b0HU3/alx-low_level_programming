#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'A program that will check if a number is positive or negative'
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));

	n = random() - RAND_MAX / 2;

if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n == 0)
{
printf("%i is zero\n", n);
}
else
{
printf("%i is positive\n", n);
}

return (0);
}