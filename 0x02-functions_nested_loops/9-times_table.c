#include <stdio.h>
#include "main.h"
/**
 *times_table - Tells you whether the parameter is lower case or not
 *Return: Noting.
 */
void times_table(void)
{
	int i;

	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%d", i * j);
			if (j != 9)
				putchar(44);
		}
		printf("\n");
	}
}
