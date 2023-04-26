#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int length, length1, length2;

printf("--------------Tests----------------\n");
	_printf("Let's try to printf a simple sentence.\n");
	printf("Let's try to printf a simple sentence.\n");
	printf("------------------------------\n");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	printf("------------------------------\n");
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	printf("------------------------------\n");
	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");
	printf("------------------------------\n");
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	printf("------------------------------\n");
	length = _printf("Let's try to printf a simple sentence.\n");
	length2 = printf("Let's try to printf a simple sentence.\n");
	printf("------------------------------\n");
	printf("length:[%d, %i]\n", length, length);
	printf("length:[%d, %i]\n", length2, length2);
	printf("------------------------------\n");
	_printf("First: %c, Second: %c, Third: %c\n", 'l', 'e', 'o');
	printf("First: %c, Second: %c, Third: %c\n", 'l', 'e', 'o');
	printf("------------------------------\n");
	_printf("C%%%%c\n", 'y');
	printf("C%%%%c\n", 'y');
	printf("------------------------------\n");
	length = _printf("Character:[%s]\n", "Leo");
	length2 = printf("Character:[%s]\n", "Leo");
	printf("------------------------------\n");
	printf("String length: %d\n", length);
	printf("String length: %d\n", length2);
	printf("------------------------------\n");
	_printf("String:[%s]\n", "I am Ray !");
	printf("String:[%s]\n", "I am Ray !");
	printf("------------------------------\n");
	length1 = _printf("length:[%]\n", length);
	length2 = printf("length:[%]\n", length2);
	printf("------------------------------\n");
	printf("%d\n%d\n", length1, length2);
	printf("------------------------------\n");
	length1 = _printf("Percent:[%%]\n");
	length2 = printf("Percent:[%%]\n");
	printf("------------------------------\n");
	printf("%d\n%d\n", length1, length2);
	printf("------------------------------\n");
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	printf("------------------------------\n");
	_printf("Wrong: %c\n");
	printf("Wrong: %c\n");
	printf("------------------------------\n");
	_printf("Null: %s\n", NULL);
	printf("Null: %s\n", NULL);
	printf("------------------------------\n");
	_printf("Null: %c\n", NULL);
	printf("Null: %c\n", NULL);
	printf("------------------------------\n");
	_printf("Last egde case\n%", "check");
	printf("Last egde case\n%", "check");
	printf("-----------Checker Case----------------\n");
	_printf("%");
	printf("%");
	length = _printf("%");
	length2 = printf("%");
	printf("String length: %d\n", length);
	printf("String length: %d\n", length2);
	printf("--------------End----------------\n");
	return (0);
}
