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

	printf("Size of a char: %zu byte(s)", sizeof(b));
	printf("Size of an int: %zu byte(s)", sizeof(a));
	printf("Size of a long: %zu byte(s)", sizeof(c));
	printf("Size of a long long int: %zu byte(s)", sizeof(d));

	return (0);
}

