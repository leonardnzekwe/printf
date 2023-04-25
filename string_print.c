#include "main.h"

/**
 * string_print - string printing function
 * @args: variable argument list
 * @count: pointer to integer to store the count of characters printed
 * s - string (char *) parameter to print
 */

void string_print(va_list args, int *count)
{
	char *s;
	char *null;
	int i, j;

	null = "(null)";
	s = va_arg(args, char *);
	if (s == NULL)
	{
		for (j = 0; null[j] != '\0'; j++)
		{
			_putchar(null[j]);
			(*count)++;
		}
		return;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		(*count)++;
	}
}
