#include <stdio.h>
/**
 *main - demonstrates the usage of the puts() function.
 *@void: no parameters accepted
 *It prints a string to the console.
 *Return: 0  Program executed successfully.
 */
int main(void)
{
	int a;

	for (a = 0; a <= 25; a++)
		puts(97 + a);

	return (0);
}
