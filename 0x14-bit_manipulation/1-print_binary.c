#include "main.h"

/**
 * print_binary - To print the binary equiva of a decimal number
 * @n: This is a number to print in binary
 */
void print_binary(unsigned long int n)
{
	int j, _count = 0;
	unsigned long int curr;

	for (j = 63; j >= 0; j--)
	{
		curr = n >> j;

		if (curr & 1)
		{
			_putchar('1');
			_count++;
		}
		else if (_count)
			_putchar('0');
	}
	if (!_count)
		_putchar('0');
}

