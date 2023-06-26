#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 *print_array - check the code
 *@a: Arrar a
 *@n: Number of elements in n
 *Return: None.
 */
void print_array(int a[], int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			putchar(44);
			putchar(' ');
		}
	}
	putchar('\n');
}
