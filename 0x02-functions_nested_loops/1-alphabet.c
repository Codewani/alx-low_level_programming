#include <stdio.h>
#include "main.h"
/**
 *main - demonstrates the usage of the puts() function.
 *@void: no parameters accepted
 *It prints a string to the console.
 *Return: 0  Program executed successfully.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void){
	int a;

	for (a = 0; a <= 25; a++)
		putchar(97 + a);
	putchar('\n');
}
