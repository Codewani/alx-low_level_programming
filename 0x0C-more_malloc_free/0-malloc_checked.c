#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - It allocates memory using malloc
 * @b: the number of bytes to allocate
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);

	if (pt == NULL)
		exit(98);

	return (pt);
}
