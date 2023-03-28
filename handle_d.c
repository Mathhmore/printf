#include "main.h"

/**
 * print_int - function to handle d and i specifiers
 * @list: variable for variable lists
 * @f: function for
 * Return: int
 */
int print_int(va_list list, flags_s *f)
{
	int *i = va_arg(list, int);
	return (_puts(i));
}
