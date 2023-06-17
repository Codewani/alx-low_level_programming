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
		putchar(122 - a);
	putchar('\n');

	return (0);
}
