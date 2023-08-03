#include "main.h"

/**
 * get_endianness - This will check if a machine is little or big endian
 * Return: It will return 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

