#include <stdio.h>
/**
 *main - point of execution.
 *@void: no parameters accepted
 *Prints the alphabet.
 *Return: 0  Program executed successfully.
 */
int main(void)
{
	int a;

	for (a = 0; a <= 25; a++)
	{
		if (a != 4 && a != 16)
			putchar(97 + a);
	}
	putchar('\n');

	return (0);
}
