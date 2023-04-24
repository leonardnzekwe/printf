#include "main.h"

/**
 * _putchar - char printing function
 * @c: character to print
 * Return: ? success (0) : failure (-1)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
