#include <stdio.h>
#include "main.h"
/**
 *_islower(int c) - Tells you whether the parameter is lower case or not 
 *@int c: accepts an integer c
 *It prints a string to the console.
 *Return: 1 if lower case and 0 if not.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 112)
		return 1;
	else
		return 0;
}
