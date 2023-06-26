#include <string.h>
#include "main.h"
/**
 *rev_string - reverse a string
 *@s: pointer to a character
 *Return: None.
 */
void rev_string(char *s)
{
	int len;

	int i;

	char temp;

	len = strlen(s);
	for (i = 0; i <= (len - 1) / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
