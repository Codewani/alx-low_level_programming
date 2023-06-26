#include <stdio.h>
#include <string.h>
/**
 * print_rev - check the code
 * @s: points to char s
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int len;

	int i;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
		printf("%c", s[i]);
	putchar('\n');
}
