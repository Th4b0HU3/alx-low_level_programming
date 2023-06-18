#include < stdio.h >
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	long long int d;

printf("Size of a char: %u bytes(s)\n", (unsigned long)sizeof(char));
printf("Size of a int: %u bytes(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %u bytes(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %u bytes(s)\n", (unsigned long)sizeof(d));
printf("Size of a float int: %u bytes(s)\n", (unsigned long)sizeof(float));
return (0);
}
