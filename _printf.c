#include "main.h"

/**
 * _printf - create a function to output a format
 * @format: string to print
 * Return: numbers of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	va_list args;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[1] != '\0')
			{
				count += _format(format[i + 1], args);
				i++;
			}
			else
			{
				return (-1);
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	_putchar('\n');

	va_end(args);
	return (count);
}
