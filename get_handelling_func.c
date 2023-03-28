#include "main.h"

/**
 * get_handelling_func - selects the right function for print
 * depending on the conversion specifier passed to _printf
 * @c: character that holds the conversion specifier
 * Description: the function loops through the structs array
 * function_array[] to find a match between the specifier passed to _printf
 * and the first element of the struct, and then the approriate
 * function
 * Return: a pointer to the matching printing function
 */
int (*get_handelling_func(char c))(va_list, flags_s *)
{
	hand_s function_array[] = {
		{'s', print_string},
		{'c', print_char},
		{'%', print_percent},
		{'d', print_int},
		{'i', print_int}
		};
	int num_of_flags = 3;

	register int i;

	for (i = 0; i < num_of_flags; i++)
		if (function_array[i].hand == c)
			return (function_array[i].f);
	return (NULL);
}
