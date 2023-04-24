#include "main.h"

/**
 * string_print - string printing
 * @s: char * parameter to print
 */

void string_print(va_list s)
{
	char *string;
	char *null;
	int i, j;

	null = "(null)";
	string = va_arg(s, char *);
	if (string == NULL)
	{
		for (j = 0; null[j] != '\0'; j++)
		{
			_putchar(null[j]);
		}
		return;
	}
	
	for (i = 0; string[i] != '\0'; i++)
	{
		_putchar(string[i]);
	}
}
