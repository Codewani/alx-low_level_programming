#include "main.h"
/**
 *swap_int - check the code
 *@a: pointer to an integer
 *@b: pointer to another integer
 *Return: None.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
