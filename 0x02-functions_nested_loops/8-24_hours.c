#include <stdio.h>
#include "main.h"
/**
 *jack_bauerjack_bauer - Tells you whether the parameter is lower case or not
 *@void
 *Return: Does not return anything.
 */
void jack_bauer(void)
{
	char i;

	char j;

	char k;

	char l;

	char m;

	for (i = '0'; i <= '2'; i++)
	{
		if (i == '2')
			m = '3';
		else
			m = '9';
		for (j = '0'; j <= m; j++)
		{
			for (k = '0'; k <= '5'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					putchar(i);
					putchar(j);
					putchar(58);
					putchar(k);
					putchar(l);
					putchar('\n');
				}
			}
		}
	}
}
