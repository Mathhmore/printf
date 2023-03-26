#include "main.h"

/**
 * print_char - prints a character
 * @list: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_char(va_list list, flags_s *f)
{
	(void)f;
	_putchar(va_arg(list, int));
	return (1);
}
