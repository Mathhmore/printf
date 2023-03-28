#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @p: flag for the '+' character
 * @sps: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int p;
	int sps;
	int hash;
} flags_s;

/**
 * struct hand - Struct op
 *
 * @hand: The operator
 * @f: The function Associated
 */
typedef struct hand
{
	char hand;
	int (*f)(va_list ap, flags_s *f);
} hand_s;

int _putchar(char c);
int _puts(char *str);
int print_string(va_list list, flags_s *f);
int _printf(const char *format, ...);
int print_percent(va_list list, flags_s *f);
int print_char(va_list list, flags_s *f);
int (*get_handelling_func(char c))(va_list, flags_s *);
int get_flag(char c, flags_s *f);
int print_int(va_list list, flags_s *f);

#endif
