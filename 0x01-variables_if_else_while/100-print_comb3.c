#include <stdio.h>
/**
 *main - point of execution.
 *@void: no parameters accepted
 *Prints the alphabet.
 *Return: 0  Program executed successfully.
 */
int main(void)
{
	int i;

	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(48 + i);
			putchar(48 + j);
			if (i != 8 && j != 9)
			{
				putchar(44);
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
