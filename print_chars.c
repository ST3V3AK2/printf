#include "main.h"

/**
 * _putchar - prints a character
 * @c: input character
 *
 * Return: on sucess 1, else 0
 */

int _putchar(char c)
{
	int n;

	n = write(1, &c, 1);
	if (!(n == 1))
		return (0);
	return (n);
}

/**
 * _puts - print a string
 * @str: pointer to input string
 *
 * Return: number of characters printed and 0 on failure
 */

int _puts(char *str)
{
	int i;

	if (str == NULL)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
