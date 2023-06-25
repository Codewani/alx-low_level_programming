#include <stdio.h>
#include "main.h"
/**
 *print_last_digit - Tells you whether the parameter is lower case or not
 *@c: accepts an integer c
 *It prints a string to the console.
 *Return: The last digit of c..
 */
int print_last_digit(int c)
{
	if (c < 0)
		c = -1 * c;
	int rem = c % 10;
	_putchar(rem + '0');
	return (rem);
}
