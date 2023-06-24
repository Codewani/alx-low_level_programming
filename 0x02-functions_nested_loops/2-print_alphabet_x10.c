#include <stdio.h>
#include "main.h"
/**
 *print_alphabet_x10 - prints the alphabet 10 times
 *@void: no parameters accepted
 *It prints a string to the console.
 *Return: void
 */
void print_alphabet_x10(void)
{
	int a;

	int b;

	for(b = 0; b <= 9; b++)
	{
		for (a = 0; a <= 25; a++)
			putchar(97 + a);
		putchar('\n');
	}
}
