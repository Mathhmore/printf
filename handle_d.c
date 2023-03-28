#include "main.h"

/**
 * digit_counter - counts digit of a number
 * @n: number given
 * Return: number of digits
 */
int digit_counter(int n)
{
	int count = 0;

	if (n < 0)
		n = n * -1;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

/**
 * print - prints each digit of a number and helps print_int
 * @n: number given
 * Return: void
 */
void print(int n)
{
	int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;
	if (num / 10)
		print(num / 10);
	_putchar((num % 10) + '0');
}

/**
 * print_int - function to handle d and i specifiers
 * @list: variable for variable lists
 * @f: function for
 * Return: int
 */
int print_int(va_list list, flags_s *f)
{
	int i = va_arg(list, int);
	int c = digit_counter(i);

	if (f->sps == 1 && f->p == 0 && i >= 0)
		c += _putchar(' ');
	if (f->p == 1 && i >= 0)
		c += _putchar('+');
	if (i <= 0)
		c++;
	print(i);
	return (c);
}
