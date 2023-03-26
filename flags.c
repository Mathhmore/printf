#include "main.h"

/**
 * get_flag - turns on flags if _printf finds
 * @c: character that holds the flag specifier
 * @f: pointer to the struct flags in which we turn the flags on
 * Return: 1 if a flag has been turned on, 0 otherwise
 */
int get_flag(char c, flags_s *f)
{
	int i = 0;

	switch (c)
	{
		case '+':
			f->p = 1;
			i = 1;
			break;
		case ' ':
			f->sps = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}
	return (i);
}
