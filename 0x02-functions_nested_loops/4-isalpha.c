#include <stdio.h>
#include "main.h"
/**
 *_isalpha - Tells you whether the parameter is lower case or not
 *@c: accepts an integer c
 *It prints a string to the console.
 *Return: 1 if alphabetic and 0 if not.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
