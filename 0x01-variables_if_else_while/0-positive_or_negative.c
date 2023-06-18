#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'Check if a number is positive or negative validation'
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));

	n = random() - RAND_MAX / 2;

if (n < 0)
{
printf("%i is negative\n", n);
}
else if (n > 0)
{
printf("%i is positive\n", n);
}
else
{
printf("%i is zero\n", n);
}
return (0);

}
