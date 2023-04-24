#include "main.h"

void string_print(va_list s)
{
	char *string;
	int i;

	string = va_arg(s, char *);
	if (string == NULL)
	{
		return;
	}
	
	for (i = 0; string[i] != '\0'; i++)
	{
		_putchar(string[i]);
	}
}
