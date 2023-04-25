#include "main.h"

/**
 * dec_print - prints a decimal integer
 * @args: variable argument list
 * @count: pointer to integer to store the count of characters printed
 */

void dec_print(va_list args, int *count)
{
	int n, num;

	n = va_arg(args, int);
	if (n < 0)
	{
		_putchar('-');
		*count += 1;
		num = -n;
	}
	else
	{
		num = n;
	}
	if (num / 10)
	{
		dec_print(args, count);
	}
	_putchar(num % 10 + '0');
	*count += 1;
}
