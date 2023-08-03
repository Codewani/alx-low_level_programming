#include "main.h"
#include <unistd.h>
/**
 * _putchar - In order to write the character c to stdout
 * @c: This The character to print
 *
 * Return: return On success 1.
 * If error, -1 is returned, and errno is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

