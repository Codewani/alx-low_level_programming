#include <stdio.h>
#include "main.h"
/**
 *print_sign - Tells you whether the parameter is lower case or not
 *@n: accepts an integer n
 *It prints a string to the console.
 *Return: 1 if positive and -1 if negative and 0 if neither.
 */
int print_sign(int n)
{
	if (n > o)
	{
		printf("+");
		return (1);
	}
	if (n < o)
	{
		printf("-");
		return (-1);
	}
	else
	{
		printf("0");
		return (0);
	}
}
