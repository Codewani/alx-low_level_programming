#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - It reallocates a memory block using malloc and free
 * @ptr: apointer to the memory previsouly allocated by malloc
 * @old_size: thesize of the allocated memory for ptr
 * @new_size: thenew size of the new memory block
 *
 * Return: thepointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt1;
	char *old_ptr;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	pt1 = malloc(new_size);
	if (!pt1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (j = 0; j < new_size; j++)
			pt1[j] = old_ptr[j];
	}

	if (new_size > old_size)
	{
		for (j = 0; j < old_size; j++)
			pt1[j] = old_ptr[j];
	}

	free(ptr);
	return (pt1);
}
