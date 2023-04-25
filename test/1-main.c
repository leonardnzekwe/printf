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
    int len;
    int len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Positive:[%d]\n", 962534);
    printf("Positive:[%d]\n", 962534);
    _printf("Int Positive:[%i]\n", 242962534);
    printf("Int Positive:[%i]\n", 242962534);
    _printf("Int Negative:[%i]\n", -8962534);
    printf("Int Negative:[%i]\n", -8962534);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    _printf("Negative String:[%d]\n", "-leo");
    printf("Negative String:[%d]\n", "-leo");
    _printf("Positive String:[%d]\n", "ra+y");
    printf("Positive String:[%d]\n", "ra+y");
    _printf("----------------\n");
    _printf("Negative String:[%d]\n", "-leo");
    printf("Negative String:[%d]\n", "-leo");
    _printf("Positive String:[%d]\n", "ra+y");
    printf("Positive String:[%d]\n", "ra+y");
    _printf("----------------\n");
    _printf("Zero:[%d]\n", 0);
    printf("Zero: [%d]\n", 0);
    _printf("Zero:[%i]\n", 0);
    printf("Zero:[%i]\n", 0);
    _printf("no arg:[%d]\n");
    printf("no arg: [%d]\n");
    _printf("no arg:[%i]\n");
    printf("no arg:[%i]\n");
    return (0);
}
