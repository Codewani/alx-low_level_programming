#include "main.h"

/**
 * get_bit - It returns the value of a bit at an index in a decimal number...
 * @n: a number to search.....
 * @index: the index of the bit.....
 *
 * Return: the value of the bit,,,,
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);

	val = (n >> index) & 1;

	return (val);
}
