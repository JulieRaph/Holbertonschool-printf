#include "main.h"

/**
 * _format - function all character specifier
 *@specifier: conversion specifier
 *@args: arguments list
 *Return: specifiers
*/

int _format(const char specifier, va_list args)
{
	spec_t specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}
	};

	int i = 0;

	while (specifiers[i].specifier)
	{
		if (specifiers[i].specifier == specifier)
			return (specifiers[i].f(args));
		i++;
	}

	return (0);
}
