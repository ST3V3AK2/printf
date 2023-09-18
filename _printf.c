#include "main.h"

/**
 * _printf - prints strings in a specific format
 * @format: input string format
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	char *str;
	int count = 0, n = 0, i;

	va_start(args, format);
	if (format == NULL)
	{
		_putchar('\n');
		return (0);
	}
	for (i = 0; i != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					str = va_arg(args, int);
					n = _putchar(str);
					break;
				case 's':
					str = va_arg(ars, char *);
					n = print_chars(str);
					break;
				default:
					break;
			}
			i++;
			count += n;
			continue;
		}
		_putchar(format[i]);
		count++;
	}
	va_end(args);
	return (total);
}
