#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints a string using recursion
 * @s: paramerter is a string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
	}
	else
	{
		printf("%c", *s);
		s++;
		_puts_recursion(s);
	}
}
