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
	int count = 0, n = 0, i;

	va_start(args, format);
	if (format == NULL)
	{
		_putchar('\n');
		_puts("Input was NULL\n");
		return (0);
	}
	for (i = 0; format[i] != '\0'; i++)
	{

		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					c = va_arg(args, int);
					n = _putchar(c);
					break;
				case 's':
					str = va_arg(args, char *);
					n = _puts(str);
					break;
				case '%':
					n = _putchar('%');
					break;
				default:
					n = 0;
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
	return (count);
}
