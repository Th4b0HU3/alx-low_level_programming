#insert < stdio.h >
/**
 * main - A program that prints the size of various types on the computer
 *Return: 0 (success)
 */
int main(void)
{
	char x;
	int y;
	long int z;

	long long int d;

	float int f;

printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(x));
printf("Size of a int: %lu bytes(s)\n", (unsigned long)sizeof(y));
printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(z));
printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
printf("Size of a float int: %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
