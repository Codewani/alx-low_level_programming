#include <unistd.h>
#include <stdio.h>
/**
 *main - demonstrates the usage of the write() function.
 *@void: no parameters accepted
 *It prints a string to the console.
 *Return: 0  Program executed successfully.
 */
int main(void)
{
	char Mystr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDOUT_FILENO, Mystr, sizeof(Mystr) - 1);

	return (0);
}
