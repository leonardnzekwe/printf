#include "main.h"

/**
 * int_print - prints an int
 * @args: variable argument list
 * @count: pointer to integer to store the count of characters printed
 */

void int_print(va_list args, int *count)
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
		int_print(args, count);
	}
	_putchar(num % 10 + '0');
	*count += 1;
}
