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
       int ld;

        srand(time(0));

        n = random() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
	Printf("if Last digit %d is %d and greater than 5\n", n, ld);
	}
	if else(ld == 0)
	{
	Printf("Last digit %d is %d and is 0\n", n, ld);
	}
	else
	{
	Printf("Last digit of %d is %d and is less than 6 not 0\n", n, ld); 
	}
	return (0)
