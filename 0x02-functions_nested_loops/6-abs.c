#include <stdio.h>
#include "main.h"
/**
 *  *_abs - Tells you whether the parameter is lower case or not
 *   *@c: accepts an integer c
 *    *It prints a string to the console.
 *     *Return: Absolute value of c
 *      */
int _abs(int c)
{
	if (c < 0)
		return (-1 * c);
	else
		return (c);
}
