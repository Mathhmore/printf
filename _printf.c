#include "main.h"

/**
 * _printf - does as the standard c function printf
 * @format: format identifiers passed into
 * Return: length
 */
int _printf(const char *format, ...)
{
	int (*func)(va_list, flags_s *);
	const char *chr;
	va_list arg;
	flags_s flags = {0, 0, 0};
	int count = 0;

	va_start(arg, format);
	if (format == NULL)
		return (0);
	if ((!format[1] && format[0] == '%') || !format)
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (chr = format; *chr; chr++)
	{
		if (*chr == '%')
		{
			chr++;
			if (*chr == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (get_flag(*chr, &flags))
				chr++;
			func = get_handelling_func(*chr);
			count += (func) ? func(arg, &flags) : _printf("%%%c", *chr);
		}
		else
			count += _putchar(*chr);
	}
	_putchar(-1);
	va_end(arg);
	return (count);
}
