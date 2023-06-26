#include <string.h>
#include "main.h"
/**
 *puts2 - check the code
 *@str: pointer to a char
 *Return: None.
 */
void puts2(char *str)
{
	int len;

	int i;

	char temp;

	len = strlen(str);
	for (i = 0; i <= (len - 1); i += 2)
	{
		printf("%c", str[i]);
	}
}
