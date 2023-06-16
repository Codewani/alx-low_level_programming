#include <stdlib.h>
#include <time.h>
/**
 *main - point of execution for the entire program
 *@void: no parameters accepted
 *Tells you whether a random number is positive or negative
 *Return: 0  Program executed successfully.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%zu is positive", n);
	else if (n == 0)
		printf("%zu is zero", n);
	else
		printf("%zu is negative", n);

	return (0);
}
