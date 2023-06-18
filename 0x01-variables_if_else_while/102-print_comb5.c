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

	int k;

	int l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = i; k <= 9; k++)
			{
				for (l = j + 1; l <= 9; l++)
				{
					putchar(48 + i);
					putchar(48 + j);
					putchar(' ');
					putchar(48 + k);
					putchar(48 + l);
					if (i != 9 || j != 8)
					{
						putchar(44);
						putchar(' ');
					}
				}
			}
		}
	}

	return (0);
}
