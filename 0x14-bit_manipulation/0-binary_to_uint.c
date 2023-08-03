#include "main.h"

/**
 * binary_to_uint - To convert a bin number to unsigned int
 * @b: a string containing the binary number
 *
 * Return: return the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int valdec = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		valdec = 2 * valdec + (b[j] - '0');
	}

	return (valdec);
}

