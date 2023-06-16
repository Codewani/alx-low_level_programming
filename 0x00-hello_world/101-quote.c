#include <unistd.h>
#include <stdio.h>
/**
 *main - demonstrates the usage of the write() function.
 *@void: no parameters accepted
 *It prints a string to the console.
 *Return: 1  Program executed successfully.
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDOUT_FILENO, str, sizeof(str) - 1);

	return (1);
}
