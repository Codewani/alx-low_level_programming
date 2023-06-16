#include <stdio.h>
/**
 *main - demonstrates the size of varioua variable types.
 *@void: no parameters accepted
 *It prints strings to the console.
 *Return: 0  Program executed successfully.
 */
int main(void)
{
	int a;

	char b;

	long c;

	long long int d;

	printf("Size of a char: %zu byte(s)\n", sizeof(b));
	printf("Size of an int: %zu byte(s)\n", sizeof(a));
	printf("Size of a long: %zu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(d));

	return (0);
}

