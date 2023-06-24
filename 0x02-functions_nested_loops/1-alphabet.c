#include <stdio.h>
#include "main.h"
/**
 *print_alphabet - prints the alphabet
 *@void: no parameters accepted
 *It prints a string to the console.
 *Return: void
 */
void print_alphabet(void)
{
	int a;

	for (a = 0; a <= 25; a++)
		putchar(97 + a);
	putchar('\n');
}
