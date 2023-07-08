#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of the program.
 * @argc: The number of arguments.
 * @argv: An array of arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc __attribute__((unused)), char *argv[])
{
    /* Print the name of the program */
	printf("%s\n", *argv);

    /* Return 0 to indicate successful execution */
	return (0);
}
