#include "main.h"

/**
 * set_bit - To set a bit at an index to 1
 * @n: a pointer to the value to change
 * @index: an index of the bit to set to 1
 *
 * Return: returm 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
