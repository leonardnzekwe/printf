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
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    printf("---------------\n");
    _printf("%+d", 1024);
    printf("%+d", 1024);
    _printf("There is %+i bytes in %+i KB\n", 1024, 1);
    printf("There is %+i bytes in %+i KB\n", 1024, 1);
    _printf("%+d + %+d = %+d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
    printf("%+d + %+d = %+d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
    len = _printf("%#o\n", UINT_MAX);
    len2 = printf("%#o\n", UINT_MAX);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    len = _printf("%#x\n", 1024);
    len2 = printf("%#x\n", 1024);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    printf("---------------\n");
    len = _printf("% "); _printf("% % % % ");
    len2 = printf("% "); printf("% % % % ");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    printf("---------------\n");
    len = _printf("%#X\n", 0);
    len2 = printf("%#X\n", 0);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    len = _printf("%#x\n", 0);
    len2 = printf("%#x\n", 0);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    len = _printf("%#o\n", 0);
    len2 = printf("%#o\n", 0);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    printf("---------------\n");
    len = _printf("%#o\n", 1024);
    len2 = printf("%#o\n", 1024);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    len = _printf("%");
    len2 = printf("%");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    printf("-------Edge Cases--------\n");
    len = _printf("% +i + %+ i = % +d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
    len2 = printf("% +i + %+ i = % +d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    len = _printf("% +d + %+ d = % +i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
    len2 = printf("% +d + %+ d = % +i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    printf("---------------\n");
    return (0);
}