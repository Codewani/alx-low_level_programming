#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- In order toRead text file print to STDOUT.
 * @filename: text file to read
 * @letters: thenumber of letters to be read
 * Return: w- real number of bytes read and printed
 * 0 in case function fails or filenameisNULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t w;
	ssize_t p;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	p = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, p);

	free(buffer);
	close(fd);
	return (w);
}
