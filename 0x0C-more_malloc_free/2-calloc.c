#include <stdlib.h>
#include "main.h"

/**
 * *_memset - It fills memory with a constant byte
 * @s: the memory area to be filled
 * @b: the char to copy
 * @n: the number of times to copy b
 *
 * Return: The pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}

/**
 * _calloc - It allocates memory for an array
 * @nmemb: Thenumber of elements in the array
 * @size: Thesize of each element
 *
 * Return: The pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pt;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pt = malloc(size * nmemb);

	if (pt == NULL)
		return (NULL);

	_memset(pt, 0, nmemb * size);

	return (pt);
}
