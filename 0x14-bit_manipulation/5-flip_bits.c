#include "main.h"

/**
 * flip_bits - To counts the number of bits to change
 * @n: the first number
 * @m: the second number
 *
 * Return: return number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, _count = 0;
	unsigned long int _curr;
	unsigned long int _exc = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		_curr = _exc >> i;
		if (_curr & 1)
			_count++;
	}

	return (_count);
}
