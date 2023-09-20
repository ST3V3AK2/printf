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
	char c, *str;
	int count = 0, i, num;

	va_start(args, format);
	if (format == NULL)
	{
		_putchar('\n');
		return (0);
	}
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				num = va_arg(args, int);
				count += print_int(num);
			}
			switch (format[i + 1])
			{
				case 'c':
					c = va_arg(args, int);
					count += _putchar(c);
					break;
				case 's':
					str = va_arg(args, char *);
					count += _puts(str);
					break;
				case '%':
					count += _putchar('%');
					break;
			}
			i++;
			continue;
		}
		_putchar(format[i]);
		count++;
	}
	va_end(args);
	return (count);
}
