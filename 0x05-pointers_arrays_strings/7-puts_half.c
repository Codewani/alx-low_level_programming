#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 *puts_half - check the code
 *@str: pointer to a character
 *Return: None.
 */
void puts_half(char *str)
{
	int len;

	int start;

	int i;

	len = strlen(str);
	if (len % 2 == 0)
		start = len / 2;
	else
		start = ((len - 1) / 2);
	for (i = start; i <= (len - 1); i++)
		printf("%c", str[i]);
	printf('\n');
}
