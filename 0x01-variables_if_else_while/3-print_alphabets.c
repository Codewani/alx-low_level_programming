#include <stdio.h>
/**
 *main - PRINTS ALPHABETS.
 *@void: no parameters accepted
 *It prints a string to the console.
 *Return: 0  Program executed successfully.
 */
int main(void)
{
	int a;

	for (a = 0; a <= 25; a++)
		putchar(97 + a);
	for (a = 0; a <= 25; a++)
		putchar(65 + a);
	putchar('\n');

	return (0);
}
