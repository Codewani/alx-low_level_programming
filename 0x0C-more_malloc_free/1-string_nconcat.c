#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - It concatenates n bytes of a string to another string
 * @s1: The string to append to
 * @s2: The string to concatenate from
 * @n: The number of bytes from s2 to concatenate to s1
 *
 * Return: The pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		p = malloc(sizeof(char) * (len1 + n + 1));
	else
		p = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!p)
		return (NULL);

	while (i < len1)
	{
		p[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		p[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		p[i++] = s2[j++];

	p[i] = '\0';

	return (p);
}
