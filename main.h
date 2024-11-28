#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct specifiers - struct to principal function
 * @specifier: specifier type
 * @f: associated functions pointer
*/

typedef struct specifiers
{
	char specifier;
	int (*f)(va_list args);
} spec_t;


/* prototypes */

int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int _putchar(char c);
int _printf(const char *format, ...);
int _format(const char specifier, va_list args);

#endif
