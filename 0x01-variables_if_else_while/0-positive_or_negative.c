#include <stdlib.h>
#include <time.h>
/**
 *main - point of execution
 *@void: no parameters accepted
 *Tells you whether a number is negative, positive or zeroe
 *Return: 0  Program executed successfully.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%zu is positive", n);
	if (n == 0)
		printf("%zu is zero", n);
	else
		printf("%zu is negative", n);

	return (0);
}