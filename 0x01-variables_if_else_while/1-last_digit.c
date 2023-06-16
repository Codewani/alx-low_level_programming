#include <stdlib.h>
#include <time.h>
#include <stdio.h>
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

	int lastDigit = n % 10;

	if (lastDigit > 5)
		printf("Last digit of %d is %d and is greater than 5", n, last_digit);
	else if (lastDigit == 0)
		printf("Last digit of %d is %d and is equal to zero", n, last_digit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last_digit);

	return (0);
}
