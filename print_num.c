#include "main.h"

/**
 * count_int - counts number of digits in an integer
 * @n: input integer
 *
 * Return: n
 */

int count_int(int n)
{
	int i = 0;

	if (n < 0)
		n = -n;
	for (i = 1; n / 10 != 0; i++)
		n = n / 10;
	return (i);

}

/**
 * print_num - prints an integer
 * @n: input integer
 *
 * Return: void
 */

void print_num(int n)
{
	if (n < 0)
	{
		n = -n;
		putchar('-');
	}
	if (n / 10)
		print_int(n / 10);
	putchar(n % 10 + '0');
}

/**
 * print_int - prints integers
 * @n: input integer
 *
 * Return: nuber of characters printed
 */

int print_int(int n)
{
	print_num(n);
	return (count_int(n));
}
