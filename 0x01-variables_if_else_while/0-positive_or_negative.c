#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This program will assign a random number to the variable n
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));

	n = random() - RAND_MAX / 2;

if (n > 0)
printf("%d is positive\n", n);
if else(n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);
return (0);
}
