#include "main.h"
/**
 * _pow_recursion - returns the value of x power y
 * @x: value
 * @y: power
 *
 * Return: x ^ y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
