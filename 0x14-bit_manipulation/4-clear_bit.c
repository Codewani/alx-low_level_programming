#include "main.h"

/**
 * clear_bit - It sets the value of a bit to 0
 * @n: pointer to the number
 * @index: index
 *
 * Return: return 1 for success, return -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
